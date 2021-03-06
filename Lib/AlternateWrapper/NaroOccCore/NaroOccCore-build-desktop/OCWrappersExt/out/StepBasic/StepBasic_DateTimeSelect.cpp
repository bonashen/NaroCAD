// File generated by CPPExt (CPP file)
//

#include "StepBasic_DateTimeSelect.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepBasic_Date.h"
#include "StepBasic_LocalTime.h"
#include "StepBasic_DateAndTime.h"


using namespace OCNaroWrappers;

OCStepBasic_DateTimeSelect::OCStepBasic_DateTimeSelect(StepBasic_DateTimeSelect* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepBasic_DateTimeSelect::OCStepBasic_DateTimeSelect() 
{
  nativeHandle = new StepBasic_DateTimeSelect();
}

 Standard_Integer OCStepBasic_DateTimeSelect::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepBasic_DateTimeSelect*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepBasic_Date^ OCStepBasic_DateTimeSelect::Date()
{
  Handle(StepBasic_Date) tmp = ((StepBasic_DateTimeSelect*)nativeHandle)->Date();
  return gcnew OCStepBasic_Date(&tmp);
}

OCStepBasic_LocalTime^ OCStepBasic_DateTimeSelect::LocalTime()
{
  Handle(StepBasic_LocalTime) tmp = ((StepBasic_DateTimeSelect*)nativeHandle)->LocalTime();
  return gcnew OCStepBasic_LocalTime(&tmp);
}

OCStepBasic_DateAndTime^ OCStepBasic_DateTimeSelect::DateAndTime()
{
  Handle(StepBasic_DateAndTime) tmp = ((StepBasic_DateTimeSelect*)nativeHandle)->DateAndTime();
  return gcnew OCStepBasic_DateAndTime(&tmp);
}


