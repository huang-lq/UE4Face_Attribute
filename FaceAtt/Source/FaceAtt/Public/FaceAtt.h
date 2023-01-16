#pragma once

#include "Modules/ModuleManager.h"

/*
*   If you have any questions, please contact me
*   Github: https://github.com/huang-lq
*	CSDN:   https://blog.csdn.net/weixin_44346103?type=blog
*/

class FFaceAttModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
