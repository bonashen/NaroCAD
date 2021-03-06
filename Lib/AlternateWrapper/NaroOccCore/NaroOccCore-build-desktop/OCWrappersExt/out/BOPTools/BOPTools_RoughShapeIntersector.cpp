// File generated by CPPExt (CPP file)
//

#include "BOPTools_RoughShapeIntersector.h"
#include "../Converter.h"
#include "../Bnd/Bnd_HArray1OfBox.h"
#include "BOPTools_HArray2OfIntersectionStatus.h"


using namespace OCNaroWrappers;

OCBOPTools_RoughShapeIntersector::OCBOPTools_RoughShapeIntersector(BOPTools_RoughShapeIntersector* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_RoughShapeIntersector::OCBOPTools_RoughShapeIntersector(BooleanOperations_PShapesDataStructure PDS) 
{
  nativeHandle = new BOPTools_RoughShapeIntersector(PDS);
}

 void OCBOPTools_RoughShapeIntersector::Perform()
{
  ((BOPTools_RoughShapeIntersector*)nativeHandle)->Perform();
}

OCBOPTools_HArray2OfIntersectionStatus^ OCBOPTools_RoughShapeIntersector::TableOfStatus()
{
  Handle(BOPTools_HArray2OfIntersectionStatus) tmp = ((BOPTools_RoughShapeIntersector*)nativeHandle)->TableOfStatus();
  return gcnew OCBOPTools_HArray2OfIntersectionStatus(&tmp);
}

 System::Boolean OCBOPTools_RoughShapeIntersector::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_RoughShapeIntersector*)nativeHandle)->IsDone());
}


