#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/PreWindowsApi.h"
#include <windows.h>
#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"
#include <string>
#include "Face.generated.h"


/*
*   If you have any questions, please contact me
*   Github: https://github.com/huang-lq
*	CSDN:   https://blog.csdn.net/weixin_44346103?type=blog
*/

class FaceRunable;

UCLASS()
class FACEATT_API AFace : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFace();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Funtion
	bool LoadDll_FaceCheck();
	void FreeDll_FaceCheck();

	UFUNCTION(BlueprintCallable, Category = "Face")
	void OpenFaceCheakThread(int CamNum);

	UFUNCTION(BlueprintCallable, Category = "Face")
	void CloseFaceCheakThread();

	FString GetFaceModelsFolderPath();

private:
	FaceRunable* FC;

};

class FaceRunable : public FRunnable
{
public:
	FaceRunable(const FString& ThreadName);
	~FaceRunable();

	void Suspend(bool bSuspend);	// �̹߳���/����
	void StopThread();				// ֹͣ�̣߳�һ���ø÷���
	void ShutDown(bool bShouldWait);// ֹͣ�̣߳�bShouldWait true��ʱ���ǿ�� kill �߳�

public:
	FString m_ThreadName;
	int32 m_ThreadID;
	FRunnableThread* ThreadIns;		// �߳�ʵ��
	FEvent* ThreadEvent;			//FEventָ��,����/�����߳�, �ڸ��Ե��߳���ʹ��


private:
	virtual bool Init() override;
	virtual uint32 Run() override;
	virtual void Stop() override;
	virtual void Exit() override;

};

