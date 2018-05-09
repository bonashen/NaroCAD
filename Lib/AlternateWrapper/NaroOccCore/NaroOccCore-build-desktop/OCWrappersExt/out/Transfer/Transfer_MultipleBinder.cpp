// File generated by CPPExt (CPP file)
//

#include "Transfer_MultipleBinder.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HSequenceOfTransient.h"
#include "../Standard/Standard_Type.h"
#include "../Standard/Standard_Transient.h"


using namespace OCNaroWrappers;

OCTransfer_MultipleBinder::OCTransfer_MultipleBinder(Handle(Transfer_MultipleBinder)* nativeHandle) : OCTransfer_Binder((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Transfer_MultipleBinder(*nativeHandle);
}

OCTransfer_MultipleBinder::OCTransfer_MultipleBinder() : OCTransfer_Binder((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Transfer_MultipleBinder(new Transfer_MultipleBinder());
}

 System::Boolean OCTransfer_MultipleBinder::IsMultiple()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Transfer_MultipleBinder*)nativeHandle))->IsMultiple());
}

OCStandard_Type^ OCTransfer_MultipleBinder::ResultType()
{
  Handle(Standard_Type) tmp = (*((Handle_Transfer_MultipleBinder*)nativeHandle))->ResultType();
  return gcnew OCStandard_Type(&tmp);
}

 System::String^ OCTransfer_MultipleBinder::ResultTypeName()
{
  return OCConverter::StandardCStringToString((*((Handle_Transfer_MultipleBinder*)nativeHandle))->ResultTypeName());
}

 void OCTransfer_MultipleBinder::AddResult(OCNaroWrappers::OCStandard_Transient^ res)
{
  (*((Handle_Transfer_MultipleBinder*)nativeHandle))->AddResult(*((Handle_Standard_Transient*)res->Handle));
}

 Standard_Integer OCTransfer_MultipleBinder::NbResults()
{
  return (*((Handle_Transfer_MultipleBinder*)nativeHandle))->NbResults();
}

OCStandard_Transient^ OCTransfer_MultipleBinder::ResultValue(Standard_Integer num)
{
  Handle(Standard_Transient) tmp = (*((Handle_Transfer_MultipleBinder*)nativeHandle))->ResultValue(num);
  return gcnew OCStandard_Transient(&tmp);
}

OCTColStd_HSequenceOfTransient^ OCTransfer_MultipleBinder::MultipleResult()
{
  Handle(TColStd_HSequenceOfTransient) tmp = (*((Handle_Transfer_MultipleBinder*)nativeHandle))->MultipleResult();
  return gcnew OCTColStd_HSequenceOfTransient(&tmp);
}

 void OCTransfer_MultipleBinder::SetMultipleResult(OCNaroWrappers::OCTColStd_HSequenceOfTransient^ mulres)
{
  (*((Handle_Transfer_MultipleBinder*)nativeHandle))->SetMultipleResult(*((Handle_TColStd_HSequenceOfTransient*)mulres->Handle));
}

