// File generated by CPPExt (CPP file)
//

#include "BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "BRepTopAdaptor_Tool.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepTopAdaptor_MapOfShapeTool.h"
#include "BRepTopAdaptor_DataMapNodeOfMapOfShapeTool.h"


using namespace OCNaroWrappers;

OCBRepTopAdaptor_DataMapIteratorOfMapOfShapeTool::OCBRepTopAdaptor_DataMapIteratorOfMapOfShapeTool(BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepTopAdaptor_DataMapIteratorOfMapOfShapeTool::OCBRepTopAdaptor_DataMapIteratorOfMapOfShapeTool() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool();
}

OCBRepTopAdaptor_DataMapIteratorOfMapOfShapeTool::OCBRepTopAdaptor_DataMapIteratorOfMapOfShapeTool(OCNaroWrappers::OCBRepTopAdaptor_MapOfShapeTool^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool(*((BRepTopAdaptor_MapOfShapeTool*)aMap->Handle));
}

 void OCBRepTopAdaptor_DataMapIteratorOfMapOfShapeTool::Initialize(OCNaroWrappers::OCBRepTopAdaptor_MapOfShapeTool^ aMap)
{
  ((BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool*)nativeHandle)->Initialize(*((BRepTopAdaptor_MapOfShapeTool*)aMap->Handle));
}

OCTopoDS_Shape^ OCBRepTopAdaptor_DataMapIteratorOfMapOfShapeTool::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCBRepTopAdaptor_Tool^ OCBRepTopAdaptor_DataMapIteratorOfMapOfShapeTool::Value()
{
  BRepTopAdaptor_Tool* tmp = new BRepTopAdaptor_Tool();
  *tmp = ((BRepTopAdaptor_DataMapIteratorOfMapOfShapeTool*)nativeHandle)->Value();
  return gcnew OCBRepTopAdaptor_Tool(tmp);
}

