// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_Tools2d.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo.h"
#include "../TopTools/TopTools_ListOfShape.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_Tools2d::OCTopOpeBRepBuild_Tools2d(TopOpeBRepBuild_Tools2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 void OCTopOpeBRepBuild_Tools2d::MakeMapOfShapeVertexInfo(OCNaroWrappers::OCTopoDS_Wire^ aWire, OCNaroWrappers::OCTopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo^ aMap)
{
  TopOpeBRepBuild_Tools2d::MakeMapOfShapeVertexInfo(*((TopoDS_Wire*)aWire->Handle), *((TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo*)aMap->Handle));
}

 void OCTopOpeBRepBuild_Tools2d::DumpMapOfShapeVertexInfo(OCNaroWrappers::OCTopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo^ aMap)
{
  TopOpeBRepBuild_Tools2d::DumpMapOfShapeVertexInfo(*((TopOpeBRepBuild_IndexedDataMapOfShapeVertexInfo*)aMap->Handle));
}

 void OCTopOpeBRepBuild_Tools2d::Path(OCNaroWrappers::OCTopoDS_Wire^ aWire, OCNaroWrappers::OCTopTools_ListOfShape^ aResList)
{
  TopOpeBRepBuild_Tools2d::Path(*((TopoDS_Wire*)aWire->Handle), *((TopTools_ListOfShape*)aResList->Handle));
}


