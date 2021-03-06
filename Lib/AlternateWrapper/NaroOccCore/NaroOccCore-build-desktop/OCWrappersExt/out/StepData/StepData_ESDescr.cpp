// File generated by CPPExt (CPP file)
//

#include "StepData_ESDescr.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfTransient.h"
#include "../Dico/Dico_DictionaryOfInteger.h"
#include "StepData_PDescr.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "StepData_Described.h"


using namespace OCNaroWrappers;

OCStepData_ESDescr::OCStepData_ESDescr(Handle(StepData_ESDescr)* nativeHandle) : OCStepData_EDescr((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepData_ESDescr(*nativeHandle);
}

OCStepData_ESDescr::OCStepData_ESDescr(System::String^ name) : OCStepData_EDescr((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepData_ESDescr(new StepData_ESDescr(OCConverter::StringToStandardCString(name)));
}

 void OCStepData_ESDescr::SetNbFields(Standard_Integer nb)
{
  (*((Handle_StepData_ESDescr*)nativeHandle))->SetNbFields(nb);
}

 void OCStepData_ESDescr::SetField(Standard_Integer num, System::String^ name, OCNaroWrappers::OCStepData_PDescr^ descr)
{
  (*((Handle_StepData_ESDescr*)nativeHandle))->SetField(num, OCConverter::StringToStandardCString(name), *((Handle_StepData_PDescr*)descr->Handle));
}

 void OCStepData_ESDescr::SetBase(OCNaroWrappers::OCStepData_ESDescr^ base)
{
  (*((Handle_StepData_ESDescr*)nativeHandle))->SetBase(*((Handle_StepData_ESDescr*)base->Handle));
}

 void OCStepData_ESDescr::SetSuper(OCNaroWrappers::OCStepData_ESDescr^ super)
{
  (*((Handle_StepData_ESDescr*)nativeHandle))->SetSuper(*((Handle_StepData_ESDescr*)super->Handle));
}

 System::String^ OCStepData_ESDescr::TypeName()
{
  return OCConverter::StandardCStringToString((*((Handle_StepData_ESDescr*)nativeHandle))->TypeName());
}

OCTCollection_AsciiString^ OCStepData_ESDescr::StepType()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_StepData_ESDescr*)nativeHandle))->StepType();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCStepData_ESDescr^ OCStepData_ESDescr::Base()
{
  Handle(StepData_ESDescr) tmp = (*((Handle_StepData_ESDescr*)nativeHandle))->Base();
  return gcnew OCStepData_ESDescr(&tmp);
}

OCStepData_ESDescr^ OCStepData_ESDescr::Super()
{
  Handle(StepData_ESDescr) tmp = (*((Handle_StepData_ESDescr*)nativeHandle))->Super();
  return gcnew OCStepData_ESDescr(&tmp);
}

 System::Boolean OCStepData_ESDescr::IsSub(OCNaroWrappers::OCStepData_ESDescr^ other)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepData_ESDescr*)nativeHandle))->IsSub(*((Handle_StepData_ESDescr*)other->Handle)));
}

 Standard_Integer OCStepData_ESDescr::NbFields()
{
  return (*((Handle_StepData_ESDescr*)nativeHandle))->NbFields();
}

 Standard_Integer OCStepData_ESDescr::Rank(System::String^ name)
{
  return (*((Handle_StepData_ESDescr*)nativeHandle))->Rank(OCConverter::StringToStandardCString(name));
}

 System::String^ OCStepData_ESDescr::Name(Standard_Integer num)
{
  return OCConverter::StandardCStringToString((*((Handle_StepData_ESDescr*)nativeHandle))->Name(num));
}

OCStepData_PDescr^ OCStepData_ESDescr::Field(Standard_Integer num)
{
  Handle(StepData_PDescr) tmp = (*((Handle_StepData_ESDescr*)nativeHandle))->Field(num);
  return gcnew OCStepData_PDescr(&tmp);
}

OCStepData_PDescr^ OCStepData_ESDescr::NamedField(System::String^ name)
{
  Handle(StepData_PDescr) tmp = (*((Handle_StepData_ESDescr*)nativeHandle))->NamedField(OCConverter::StringToStandardCString(name));
  return gcnew OCStepData_PDescr(&tmp);
}

 System::Boolean OCStepData_ESDescr::Matches(System::String^ steptype)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepData_ESDescr*)nativeHandle))->Matches(OCConverter::StringToStandardCString(steptype)));
}

 System::Boolean OCStepData_ESDescr::IsComplex()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_StepData_ESDescr*)nativeHandle))->IsComplex());
}

OCStepData_Described^ OCStepData_ESDescr::NewEntity()
{
  Handle(StepData_Described) tmp = (*((Handle_StepData_ESDescr*)nativeHandle))->NewEntity();
  return gcnew OCStepData_Described(&tmp);
}


