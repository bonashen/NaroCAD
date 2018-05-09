// File generated by CPPExt (CPP file)
//

#include "StepVisual_Array1OfPresentationStyleAssignment.h"
#include "../Converter.h"
#include "StepVisual_PresentationStyleAssignment.h"


using namespace OCNaroWrappers;

OCStepVisual_Array1OfPresentationStyleAssignment::OCStepVisual_Array1OfPresentationStyleAssignment(StepVisual_Array1OfPresentationStyleAssignment* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepVisual_Array1OfPresentationStyleAssignment::OCStepVisual_Array1OfPresentationStyleAssignment(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepVisual_Array1OfPresentationStyleAssignment(Low, Up);
}

OCStepVisual_Array1OfPresentationStyleAssignment::OCStepVisual_Array1OfPresentationStyleAssignment(OCNaroWrappers::OCStepVisual_PresentationStyleAssignment^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepVisual_Array1OfPresentationStyleAssignment(*((Handle_StepVisual_PresentationStyleAssignment*)Item->Handle), Low, Up);
}

 void OCStepVisual_Array1OfPresentationStyleAssignment::Init(OCNaroWrappers::OCStepVisual_PresentationStyleAssignment^ V)
{
  ((StepVisual_Array1OfPresentationStyleAssignment*)nativeHandle)->Init(*((Handle_StepVisual_PresentationStyleAssignment*)V->Handle));
}

 System::Boolean OCStepVisual_Array1OfPresentationStyleAssignment::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepVisual_Array1OfPresentationStyleAssignment*)nativeHandle)->IsAllocated());
}

OCStepVisual_Array1OfPresentationStyleAssignment^ OCStepVisual_Array1OfPresentationStyleAssignment::Assign(OCNaroWrappers::OCStepVisual_Array1OfPresentationStyleAssignment^ Other)
{
  StepVisual_Array1OfPresentationStyleAssignment* tmp = new StepVisual_Array1OfPresentationStyleAssignment(0, 0);
  *tmp = ((StepVisual_Array1OfPresentationStyleAssignment*)nativeHandle)->Assign(*((StepVisual_Array1OfPresentationStyleAssignment*)Other->Handle));
  return gcnew OCStepVisual_Array1OfPresentationStyleAssignment(tmp);
}

 Standard_Integer OCStepVisual_Array1OfPresentationStyleAssignment::Length()
{
  return ((StepVisual_Array1OfPresentationStyleAssignment*)nativeHandle)->Length();
}

 Standard_Integer OCStepVisual_Array1OfPresentationStyleAssignment::Lower()
{
  return ((StepVisual_Array1OfPresentationStyleAssignment*)nativeHandle)->Lower();
}

 Standard_Integer OCStepVisual_Array1OfPresentationStyleAssignment::Upper()
{
  return ((StepVisual_Array1OfPresentationStyleAssignment*)nativeHandle)->Upper();
}

 void OCStepVisual_Array1OfPresentationStyleAssignment::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepVisual_PresentationStyleAssignment^ Value)
{
  ((StepVisual_Array1OfPresentationStyleAssignment*)nativeHandle)->SetValue(Index, *((Handle_StepVisual_PresentationStyleAssignment*)Value->Handle));
}

OCStepVisual_PresentationStyleAssignment^ OCStepVisual_Array1OfPresentationStyleAssignment::Value(Standard_Integer Index)
{
  Handle(StepVisual_PresentationStyleAssignment) tmp = ((StepVisual_Array1OfPresentationStyleAssignment*)nativeHandle)->Value(Index);
  return gcnew OCStepVisual_PresentationStyleAssignment(&tmp);
}

OCStepVisual_PresentationStyleAssignment^ OCStepVisual_Array1OfPresentationStyleAssignment::ChangeValue(Standard_Integer Index)
{
  Handle(StepVisual_PresentationStyleAssignment) tmp = ((StepVisual_Array1OfPresentationStyleAssignment*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepVisual_PresentationStyleAssignment(&tmp);
}

