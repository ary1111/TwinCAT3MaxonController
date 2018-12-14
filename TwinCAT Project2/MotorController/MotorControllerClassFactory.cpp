///////////////////////////////////////////////////////////////////////////////
// MotorControllerClassFactory.cpp
#include "TcPch.h"
#pragma hdrstop

#include "MotorControllerClassFactory.h"
#include "MotorControllerServices.h"
#include "MotorControllerVersion.h"
#include "Module1.h"

BEGIN_CLASS_MAP(CMotorControllerClassFactory)
///<AutoGeneratedContent id="ClassMap">
	CLASS_ENTRY(CID_MotorControllerCModule1, SRVNAME_MOTORCONTROLLER "!CModule1", CModule1)
///</AutoGeneratedContent>
END_CLASS_MAP()

CMotorControllerClassFactory::CMotorControllerClassFactory() : CObjClassFactory()
{
	TcDbgUnitSetImageName(TCDBG_UNIT_IMAGE_NAME(SRVNAME_MOTORCONTROLLER)); 
#if defined(TCDBG_UNIT_VERSION)
	TcDbgUnitSetVersion(TCDBG_UNIT_VERSION(MotorController));
#endif //defined(TCDBG_UNIT_VERSION)
}
