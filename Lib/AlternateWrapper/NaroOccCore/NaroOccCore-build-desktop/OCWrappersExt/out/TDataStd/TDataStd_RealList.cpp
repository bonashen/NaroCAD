// File generated by CPPExt (CPP file)
//

#include "TDataStd_RealList.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "../TColStd/TColStd_ListOfReal.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"


using namespace OCNaroWrappers;

OCTDataStd_RealList::OCTDataStd_RealList(Handle(TDataStd_RealList)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_RealList(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_RealList::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_RealList::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_RealList^ OCTDataStd_RealList::Set(OCNaroWrappers::OCTDF_Label^ label)
{
  Handle(TDataStd_RealList) tmp = TDataStd_RealList::Set(*((TDF_Label*)label->Handle));
  return gcnew OCTDataStd_RealList(&tmp);
}

OCTDataStd_RealList::OCTDataStd_RealList() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_RealList(new TDataStd_RealList());
}

 System::Boolean OCTDataStd_RealList::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_RealList*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCTDataStd_RealList::Extent()
{
  return (*((Handle_TDataStd_RealList*)nativeHandle))->Extent();
}

 void OCTDataStd_RealList::Prepend(Standard_Real value)
{
  (*((Handle_TDataStd_RealList*)nativeHandle))->Prepend(value);
}

 void OCTDataStd_RealList::Append(Standard_Real value)
{
  (*((Handle_TDataStd_RealList*)nativeHandle))->Append(value);
}

 System::Boolean OCTDataStd_RealList::InsertBefore(Standard_Real value, Standard_Real before_value)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_RealList*)nativeHandle))->InsertBefore(value, before_value));
}

 System::Boolean OCTDataStd_RealList::InsertAfter(Standard_Real value, Standard_Real after_value)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_RealList*)nativeHandle))->InsertAfter(value, after_value));
}

 System::Boolean OCTDataStd_RealList::Remove(Standard_Real value)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_RealList*)nativeHandle))->Remove(value));
}

 void OCTDataStd_RealList::Clear()
{
  (*((Handle_TDataStd_RealList*)nativeHandle))->Clear();
}

 Standard_Real OCTDataStd_RealList::First()
{
  return (*((Handle_TDataStd_RealList*)nativeHandle))->First();
}

 Standard_Real OCTDataStd_RealList::Last()
{
  return (*((Handle_TDataStd_RealList*)nativeHandle))->Last();
}

OCTColStd_ListOfReal^ OCTDataStd_RealList::List()
{
  TColStd_ListOfReal* tmp = new TColStd_ListOfReal();
  *tmp = (*((Handle_TDataStd_RealList*)nativeHandle))->List();
  return gcnew OCTColStd_ListOfReal(tmp);
}

OCStandard_GUID^ OCTDataStd_RealList::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_RealList*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_RealList::Restore(OCNaroWrappers::OCTDF_Attribute^ With)
{
  (*((Handle_TDataStd_RealList*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)With->Handle));
}

OCTDF_Attribute^ OCTDataStd_RealList::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_RealList*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_RealList::Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_RealList*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 Standard_OStream& OCTDataStd_RealList::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_RealList*)nativeHandle))->Dump(anOS);
}


