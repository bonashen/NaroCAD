// File generated by CPPExt (CPP file)
//

#include "ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TColStd/TColStd_ListOfReal.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "ShapeAnalysis_DataMapOfShapeListOfReal.h"
#include "ShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal.h"


using namespace OCNaroWrappers;

OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal::OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal(Handle(ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal(*nativeHandle);
}

OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal::OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTColStd_ListOfReal^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal(new ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal(*((TopoDS_Shape*)K->Handle), *((TColStd_ListOfReal*)I->Handle), n));
}

OCTopoDS_Shape^ OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTColStd_ListOfReal^ OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal::Value()
{
  TColStd_ListOfReal* tmp = new TColStd_ListOfReal();
  *tmp = (*((Handle_ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal*)nativeHandle))->Value();
  return gcnew OCTColStd_ListOfReal(tmp);
}


