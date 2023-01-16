// Some copyright should be here...

using UnrealBuildTool;
using System.IO;


public class FaceAtt : ModuleRules
{
	//����Ŀ¼
	public string ProjectPath
	{
		get
		{
			return Path.GetFullPath(
				  Path.Combine(ModuleDirectory, "../../../../")
			);
		}
	}

	private void CopyDLLToBinaries(string Filepath, ReadOnlyTargetRules Target)
	{
		string BinariesDirectory = Path.Combine(ProjectPath, "Binaries", Target.Platform.ToString());

		string Filename = Path.GetFileName(Filepath);

        if (!Directory.Exists(BinariesDirectory))
        {
            Directory.CreateDirectory(BinariesDirectory);
        }

        File.Copy(Filepath, Path.Combine(BinariesDirectory, Filename), true);

		RuntimeDependencies.Add(Path.Combine(BinariesDirectory, Filename));
	}

	public void CopyFolder(string sourceFolder, ReadOnlyTargetRules Target)
	{
        string destFolder = Path.Combine(ProjectPath, "Binaries", Target.Platform.ToString());
        ////���Ŀ��·��������,�򴴽�Ŀ��·��
        if (!Directory.Exists(destFolder))
        {
            Directory.CreateDirectory(destFolder);
        //�õ�ԭ�ļ���Ŀ¼�µ������ļ�
		}
		string[] files = Directory.GetFiles(sourceFolder);
		foreach (string file in files)
		{
			string name = Path.GetFileName(file);
			string dest = Path.Combine(destFolder, name);
			File.Copy(file, dest,true);//�����ļ�
		}
	}
	private string SDKPath { get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../FaceSDK/")); } }


	public FaceAtt(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		CopyDLLToBinaries(Path.Combine(SDKPath, "FaceAttribute.dll"), Target);
	}
}
