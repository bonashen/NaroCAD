// File generated by CPPExt (CPP file)
//

#include "StepData_GeneralModule.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../Interface/Interface_EntityIterator.h"
#include "../Interface/Interface_ShareTool.h"
#include "../Interface/Interface_Check.h"
#include "../Interface/Interface_CopyTool.h"


using namespace OCNaroWrappers;

OCStepData_GeneralModule::OCStepData_GeneralModule(Handle(StepData_GeneralModule)* nativeHandle) : OCInterface_GeneralModule((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepData_GeneralModule(*nativeHandle);
}

