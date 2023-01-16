// Fill out your copyright notice in the Description page of Project Settings.


#include "Face.h"


bool FaceCheck_Init_Successful = false;
static void* m_DllHandle_FaceCheck = NULL;

#pragma region  FuntionPointer
typedef bool(*_StarFaceCheck)();
static _StarFaceCheck StarFaceCheck = NULL;

typedef bool(*_FaceCheckFuntion)(const char* modelpath, int CameraNumber);
static _FaceCheckFuntion FaceCheckFuntion = NULL;

typedef void(*_SetCallBackFuntion)(void(*fun1)(bool IsPeople), void(*fun2)(bool IsMan, int age, int numface));
static _SetCallBackFuntion SetCallBackFuntion = NULL;

typedef void(*_EndFaceCheck)();
static _EndFaceCheck EndFaceCheck = NULL;


#pragma endregion

static void FaceCheckCallBack_1(bool IsHavePeople);
static void FaceCheckCallBack_2(bool IsMan, int age, int numface);

int facechecknum = 0;
FString FaceModelPath;
bool IsPeople = false;

// Sets default values
AFace::AFace()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFace::BeginPlay()
{
	Super::BeginPlay();
	LoadDll_FaceCheck();
	FaceModelPath = GetFaceModelsFolderPath();
}

// Called every frame
void AFace::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFace::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	CloseFaceCheakThread();

	//在编辑器模式下释放DLL会卡死但打包出来是正常的

#if !WITH_EDITOR
	FreeDll_FaceCheck();
#endif	

}

bool AFace::LoadDll_FaceCheck()
{
	FString ProjectPath = FPaths::ProjectDir();
	FString Platform = TEXT("Win64");
	FString FilePath_FaceCheck = FPaths::Combine(ProjectPath, TEXT("Binaries") / Platform / ("FaceAttribute.dll"));
	if (m_DllHandle_FaceCheck != NULL) { return true; }
	else
	{
		if (FPaths::FileExists(FilePath_FaceCheck))
		{
			m_DllHandle_FaceCheck = FPlatformProcess::GetDllHandle(*FilePath_FaceCheck);
			if (m_DllHandle_FaceCheck != NULL)
			{
				StarFaceCheck = (_StarFaceCheck)FPlatformProcess::GetDllExport(m_DllHandle_FaceCheck, *FString("StarFaceCheck"));
				FaceCheckFuntion = (_FaceCheckFuntion)FPlatformProcess::GetDllExport(m_DllHandle_FaceCheck, *FString("FaceCheckFuntion"));
				SetCallBackFuntion = (_SetCallBackFuntion)FPlatformProcess::GetDllExport(m_DllHandle_FaceCheck, *FString("SetCallBackFuntion"));
				EndFaceCheck = (_EndFaceCheck)FPlatformProcess::GetDllExport(m_DllHandle_FaceCheck, *FString("EndFaceCheck"));

				FaceCheck_Init_Successful = true;
				return true;
			}
		}
	}
	m_DllHandle_FaceCheck = NULL;
	return false;
}

void AFace::FreeDll_FaceCheck()
{
	if (m_DllHandle_FaceCheck != NULL)
	{
		FPlatformProcess::FreeDllHandle(m_DllHandle_FaceCheck);
		m_DllHandle_FaceCheck = NULL;
		FaceCheck_Init_Successful = false;
	}
}

void AFace::OpenFaceCheakThread(int CamNum)
{
	if (!FC && FaceCheck_Init_Successful)
	{
		facechecknum = CamNum;
		StarFaceCheck();
		SetCallBackFuntion(FaceCheckCallBack_1, FaceCheckCallBack_2);
		FC = new FaceRunable(TEXT("Facecheck"));
	}
}

void AFace::CloseFaceCheakThread()
{
	if (FC && FaceCheck_Init_Successful)
	{
		SetCallBackFuntion(nullptr, nullptr);
		EndFaceCheck();
		FC->StopThread();
		delete FC;
		FC = nullptr;
	}
}

std::string GetExePath()
{
	char szFilePath[MAX_PATH + 1] = { 0 };
	GetModuleFileNameA(NULL, szFilePath, MAX_PATH);

	(strrchr(szFilePath, '\\'))[0] = 0; // 删除文件名，只获得路径字串//
	std::string path = szFilePath;
	return path;
}

FString AFace::GetFaceModelsFolderPath()
{
	std::string FolderName = "\\model\\";
	std::string::size_type pos = 0;
	std::string ExePath = GetExePath();
	while ((pos = ExePath.find_first_of('\\', pos)) != std::string::npos)
	{
		ExePath.insert(pos, "\\");
		pos = pos + 2;
	}
	ExePath.append(FolderName);
	FString Out(ExePath.c_str());
	return Out;
}



#pragma region FaceRunable

void FaceCheckCallBack_1(bool IsHavePeople)
{
	if (IsHavePeople)
	{
		IsPeople = IsHavePeople;
	}
}

void FaceCheckCallBack_2(bool IsMan, int age, int numface)
{
	if (IsPeople)
	{
		FString sex;
		if (IsMan)
		{
			sex = TEXT("This is Man,");
		}
		else
		{
			sex = TEXT("This is Woman,");
		}

		FString out = sex + TEXT("age:") + FString::FromInt(age);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, out);
		}

		if (numface != 1)
		{
			FString out1 = TEXT("There are ") + FString::FromInt(numface) + TEXT(" people");
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, out1);
			}
		}

	}
}

FaceRunable::FaceRunable(const FString& ThreadName)
{
	ThreadEvent = FPlatformProcess::GetSynchEventFromPool();
	m_ThreadName = ThreadName;
	ThreadIns = FRunnableThread::Create(this, *m_ThreadName, 0, TPri_Normal);
	m_ThreadID = ThreadIns->GetThreadID();
	UE_LOG(LogTemp, Warning, TEXT("Thread Start! ThreadID = %d"), m_ThreadID);
}

FaceRunable::~FaceRunable()
{
	if (ThreadEvent)
	{
		FPlatformProcess::ReturnSynchEventToPool(ThreadEvent); // delete ThreadEvent;
		ThreadEvent = nullptr;
	}
	if (ThreadIns)
	{
		delete ThreadIns;
		ThreadIns = nullptr;
	}
}

void FaceRunable::Suspend(bool bSuspend)
{
	if (ThreadIns)
	{
		ThreadIns->Suspend(bSuspend); //挂起/唤醒
	}
}

void FaceRunable::StopThread()
{
	Stop();
	ThreadIns->WaitForCompletion(); 
}

void FaceRunable::ShutDown(bool bShouldWait)
{
	if (ThreadIns)
	{
		ThreadIns->Kill(bShouldWait);
	}
}

bool FaceRunable::Init()
{
	return true;
}

uint32 FaceRunable::Run()
{
	const char* path = TCHAR_TO_ANSI(*FaceModelPath);
	FaceCheckFuntion(path, facechecknum);
	return 0;
}

void FaceRunable::Stop()
{
	if (ThreadEvent)
	{
		ThreadEvent->Trigger();
	}
	Suspend(false);
}

void FaceRunable::Exit()
{
	UE_LOG(LogTemp, Warning, TEXT("Thread Exit!"));
}

#pragma endregion