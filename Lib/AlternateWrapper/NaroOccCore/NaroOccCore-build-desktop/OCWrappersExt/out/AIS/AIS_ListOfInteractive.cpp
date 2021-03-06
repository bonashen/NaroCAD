// File generated by CPPExt (CPP file)
//

#include "AIS_ListOfInteractive.h"
#include "../Converter.h"
#include "AIS_ListIteratorOfListOfInteractive.h"
#include "AIS_InteractiveObject.h"
#include "AIS_ListNodeOfListOfInteractive.h"


using namespace OCNaroWrappers;

OCAIS_ListOfInteractive::OCAIS_ListOfInteractive(AIS_ListOfInteractive* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAIS_ListOfInteractive::OCAIS_ListOfInteractive() 
{
  nativeHandle = new AIS_ListOfInteractive();
}

 void OCAIS_ListOfInteractive::Assign(OCNaroWrappers::OCAIS_ListOfInteractive^ Other)
{
  ((AIS_ListOfInteractive*)nativeHandle)->Assign(*((AIS_ListOfInteractive*)Other->Handle));
}

 Standard_Integer OCAIS_ListOfInteractive::Extent()
{
  return ((AIS_ListOfInteractive*)nativeHandle)->Extent();
}

 System::Boolean OCAIS_ListOfInteractive::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((AIS_ListOfInteractive*)nativeHandle)->IsEmpty());
}

 void OCAIS_ListOfInteractive::Prepend(OCNaroWrappers::OCAIS_InteractiveObject^ I)
{
  ((AIS_ListOfInteractive*)nativeHandle)->Prepend(*((Handle_AIS_InteractiveObject*)I->Handle));
}

 void OCAIS_ListOfInteractive::Prepend(OCNaroWrappers::OCAIS_InteractiveObject^ I, OCNaroWrappers::OCAIS_ListIteratorOfListOfInteractive^ theIt)
{
  ((AIS_ListOfInteractive*)nativeHandle)->Prepend(*((Handle_AIS_InteractiveObject*)I->Handle), *((AIS_ListIteratorOfListOfInteractive*)theIt->Handle));
}

 void OCAIS_ListOfInteractive::Prepend(OCNaroWrappers::OCAIS_ListOfInteractive^ Other)
{
  ((AIS_ListOfInteractive*)nativeHandle)->Prepend(*((AIS_ListOfInteractive*)Other->Handle));
}

 void OCAIS_ListOfInteractive::Append(OCNaroWrappers::OCAIS_InteractiveObject^ I)
{
  ((AIS_ListOfInteractive*)nativeHandle)->Append(*((Handle_AIS_InteractiveObject*)I->Handle));
}

 void OCAIS_ListOfInteractive::Append(OCNaroWrappers::OCAIS_InteractiveObject^ I, OCNaroWrappers::OCAIS_ListIteratorOfListOfInteractive^ theIt)
{
  ((AIS_ListOfInteractive*)nativeHandle)->Append(*((Handle_AIS_InteractiveObject*)I->Handle), *((AIS_ListIteratorOfListOfInteractive*)theIt->Handle));
}

 void OCAIS_ListOfInteractive::Append(OCNaroWrappers::OCAIS_ListOfInteractive^ Other)
{
  ((AIS_ListOfInteractive*)nativeHandle)->Append(*((AIS_ListOfInteractive*)Other->Handle));
}

OCAIS_InteractiveObject^ OCAIS_ListOfInteractive::First()
{
  Handle(AIS_InteractiveObject) tmp = ((AIS_ListOfInteractive*)nativeHandle)->First();
  return gcnew OCAIS_InteractiveObject(&tmp);
}

OCAIS_InteractiveObject^ OCAIS_ListOfInteractive::Last()
{
  Handle(AIS_InteractiveObject) tmp = ((AIS_ListOfInteractive*)nativeHandle)->Last();
  return gcnew OCAIS_InteractiveObject(&tmp);
}

 void OCAIS_ListOfInteractive::RemoveFirst()
{
  ((AIS_ListOfInteractive*)nativeHandle)->RemoveFirst();
}

 void OCAIS_ListOfInteractive::Remove(OCNaroWrappers::OCAIS_ListIteratorOfListOfInteractive^ It)
{
  ((AIS_ListOfInteractive*)nativeHandle)->Remove(*((AIS_ListIteratorOfListOfInteractive*)It->Handle));
}

 void OCAIS_ListOfInteractive::InsertBefore(OCNaroWrappers::OCAIS_InteractiveObject^ I, OCNaroWrappers::OCAIS_ListIteratorOfListOfInteractive^ It)
{
  ((AIS_ListOfInteractive*)nativeHandle)->InsertBefore(*((Handle_AIS_InteractiveObject*)I->Handle), *((AIS_ListIteratorOfListOfInteractive*)It->Handle));
}

 void OCAIS_ListOfInteractive::InsertBefore(OCNaroWrappers::OCAIS_ListOfInteractive^ Other, OCNaroWrappers::OCAIS_ListIteratorOfListOfInteractive^ It)
{
  ((AIS_ListOfInteractive*)nativeHandle)->InsertBefore(*((AIS_ListOfInteractive*)Other->Handle), *((AIS_ListIteratorOfListOfInteractive*)It->Handle));
}

 void OCAIS_ListOfInteractive::InsertAfter(OCNaroWrappers::OCAIS_InteractiveObject^ I, OCNaroWrappers::OCAIS_ListIteratorOfListOfInteractive^ It)
{
  ((AIS_ListOfInteractive*)nativeHandle)->InsertAfter(*((Handle_AIS_InteractiveObject*)I->Handle), *((AIS_ListIteratorOfListOfInteractive*)It->Handle));
}

 void OCAIS_ListOfInteractive::InsertAfter(OCNaroWrappers::OCAIS_ListOfInteractive^ Other, OCNaroWrappers::OCAIS_ListIteratorOfListOfInteractive^ It)
{
  ((AIS_ListOfInteractive*)nativeHandle)->InsertAfter(*((AIS_ListOfInteractive*)Other->Handle), *((AIS_ListIteratorOfListOfInteractive*)It->Handle));
}


