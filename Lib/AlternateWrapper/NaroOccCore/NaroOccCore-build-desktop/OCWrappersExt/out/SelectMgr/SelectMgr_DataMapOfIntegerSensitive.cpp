// File generated by CPPExt (CPP file)
//

#include "SelectMgr_DataMapOfIntegerSensitive.h"
#include "../Converter.h"
#include "../SelectBasics/SelectBasics_SensitiveEntity.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "SelectMgr_DataMapNodeOfDataMapOfIntegerSensitive.h"
#include "SelectMgr_DataMapIteratorOfDataMapOfIntegerSensitive.h"


using namespace OCNaroWrappers;

OCSelectMgr_DataMapOfIntegerSensitive::OCSelectMgr_DataMapOfIntegerSensitive(SelectMgr_DataMapOfIntegerSensitive* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCSelectMgr_DataMapOfIntegerSensitive::OCSelectMgr_DataMapOfIntegerSensitive(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new SelectMgr_DataMapOfIntegerSensitive(NbBuckets);
}

OCSelectMgr_DataMapOfIntegerSensitive^ OCSelectMgr_DataMapOfIntegerSensitive::Assign(OCNaroWrappers::OCSelectMgr_DataMapOfIntegerSensitive^ Other)
{
  SelectMgr_DataMapOfIntegerSensitive* tmp = new SelectMgr_DataMapOfIntegerSensitive(0);
  *tmp = ((SelectMgr_DataMapOfIntegerSensitive*)nativeHandle)->Assign(*((SelectMgr_DataMapOfIntegerSensitive*)Other->Handle));
  return gcnew OCSelectMgr_DataMapOfIntegerSensitive(tmp);
}

 void OCSelectMgr_DataMapOfIntegerSensitive::ReSize(Standard_Integer NbBuckets)
{
  ((SelectMgr_DataMapOfIntegerSensitive*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCSelectMgr_DataMapOfIntegerSensitive::Bind(Standard_Integer K, OCNaroWrappers::OCSelectBasics_SensitiveEntity^ I)
{
  return OCConverter::StandardBooleanToBoolean(((SelectMgr_DataMapOfIntegerSensitive*)nativeHandle)->Bind(K, *((Handle_SelectBasics_SensitiveEntity*)I->Handle)));
}

 System::Boolean OCSelectMgr_DataMapOfIntegerSensitive::IsBound(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((SelectMgr_DataMapOfIntegerSensitive*)nativeHandle)->IsBound(K));
}

 System::Boolean OCSelectMgr_DataMapOfIntegerSensitive::UnBind(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((SelectMgr_DataMapOfIntegerSensitive*)nativeHandle)->UnBind(K));
}

OCSelectBasics_SensitiveEntity^ OCSelectMgr_DataMapOfIntegerSensitive::Find(Standard_Integer K)
{
  Handle(SelectBasics_SensitiveEntity) tmp = ((SelectMgr_DataMapOfIntegerSensitive*)nativeHandle)->Find(K);
  return gcnew OCSelectBasics_SensitiveEntity(&tmp);
}

OCSelectBasics_SensitiveEntity^ OCSelectMgr_DataMapOfIntegerSensitive::ChangeFind(Standard_Integer K)
{
  Handle(SelectBasics_SensitiveEntity) tmp = ((SelectMgr_DataMapOfIntegerSensitive*)nativeHandle)->ChangeFind(K);
  return gcnew OCSelectBasics_SensitiveEntity(&tmp);
}

 Standard_Address OCSelectMgr_DataMapOfIntegerSensitive::Find1(Standard_Integer K)
{
  return ((SelectMgr_DataMapOfIntegerSensitive*)nativeHandle)->Find1(K);
}

 Standard_Address OCSelectMgr_DataMapOfIntegerSensitive::ChangeFind1(Standard_Integer K)
{
  return ((SelectMgr_DataMapOfIntegerSensitive*)nativeHandle)->ChangeFind1(K);
}

