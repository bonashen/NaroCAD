// File generated by CPPExt (CPP file)
//

#include "ShapeExtend_DataMapOfTransientListOfMsg.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../Message/Message_ListOfMsg.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "ShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg.h"
#include "ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg.h"


using namespace OCNaroWrappers;

OCShapeExtend_DataMapOfTransientListOfMsg::OCShapeExtend_DataMapOfTransientListOfMsg(ShapeExtend_DataMapOfTransientListOfMsg* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCShapeExtend_DataMapOfTransientListOfMsg::OCShapeExtend_DataMapOfTransientListOfMsg(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new ShapeExtend_DataMapOfTransientListOfMsg(NbBuckets);
}

OCShapeExtend_DataMapOfTransientListOfMsg^ OCShapeExtend_DataMapOfTransientListOfMsg::Assign(OCNaroWrappers::OCShapeExtend_DataMapOfTransientListOfMsg^ Other)
{
  ShapeExtend_DataMapOfTransientListOfMsg* tmp = new ShapeExtend_DataMapOfTransientListOfMsg(0);
  *tmp = ((ShapeExtend_DataMapOfTransientListOfMsg*)nativeHandle)->Assign(*((ShapeExtend_DataMapOfTransientListOfMsg*)Other->Handle));
  return gcnew OCShapeExtend_DataMapOfTransientListOfMsg(tmp);
}

 void OCShapeExtend_DataMapOfTransientListOfMsg::ReSize(Standard_Integer NbBuckets)
{
  ((ShapeExtend_DataMapOfTransientListOfMsg*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCShapeExtend_DataMapOfTransientListOfMsg::Bind(OCNaroWrappers::OCStandard_Transient^ K, OCNaroWrappers::OCMessage_ListOfMsg^ I)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeExtend_DataMapOfTransientListOfMsg*)nativeHandle)->Bind(*((Handle_Standard_Transient*)K->Handle), *((Message_ListOfMsg*)I->Handle)));
}

 System::Boolean OCShapeExtend_DataMapOfTransientListOfMsg::IsBound(OCNaroWrappers::OCStandard_Transient^ K)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeExtend_DataMapOfTransientListOfMsg*)nativeHandle)->IsBound(*((Handle_Standard_Transient*)K->Handle)));
}

 System::Boolean OCShapeExtend_DataMapOfTransientListOfMsg::UnBind(OCNaroWrappers::OCStandard_Transient^ K)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeExtend_DataMapOfTransientListOfMsg*)nativeHandle)->UnBind(*((Handle_Standard_Transient*)K->Handle)));
}

OCMessage_ListOfMsg^ OCShapeExtend_DataMapOfTransientListOfMsg::Find(OCNaroWrappers::OCStandard_Transient^ K)
{
  Message_ListOfMsg* tmp = new Message_ListOfMsg();
  *tmp = ((ShapeExtend_DataMapOfTransientListOfMsg*)nativeHandle)->Find(*((Handle_Standard_Transient*)K->Handle));
  return gcnew OCMessage_ListOfMsg(tmp);
}

OCMessage_ListOfMsg^ OCShapeExtend_DataMapOfTransientListOfMsg::ChangeFind(OCNaroWrappers::OCStandard_Transient^ K)
{
  Message_ListOfMsg* tmp = new Message_ListOfMsg();
  *tmp = ((ShapeExtend_DataMapOfTransientListOfMsg*)nativeHandle)->ChangeFind(*((Handle_Standard_Transient*)K->Handle));
  return gcnew OCMessage_ListOfMsg(tmp);
}

 Standard_Address OCShapeExtend_DataMapOfTransientListOfMsg::Find1(OCNaroWrappers::OCStandard_Transient^ K)
{
  return ((ShapeExtend_DataMapOfTransientListOfMsg*)nativeHandle)->Find1(*((Handle_Standard_Transient*)K->Handle));
}

 Standard_Address OCShapeExtend_DataMapOfTransientListOfMsg::ChangeFind1(OCNaroWrappers::OCStandard_Transient^ K)
{
  return ((ShapeExtend_DataMapOfTransientListOfMsg*)nativeHandle)->ChangeFind1(*((Handle_Standard_Transient*)K->Handle));
}


