// File generated by CPPExt (CPP file)
//

#include "FEmTool_ListNodeOfListOfVectors.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "FEmTool_ListOfVectors.h"
#include "FEmTool_ListIteratorOfListOfVectors.h"


using namespace OCNaroWrappers;

OCFEmTool_ListNodeOfListOfVectors::OCFEmTool_ListNodeOfListOfVectors(Handle(FEmTool_ListNodeOfListOfVectors)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_FEmTool_ListNodeOfListOfVectors(*nativeHandle);
}

OCFEmTool_ListNodeOfListOfVectors::OCFEmTool_ListNodeOfListOfVectors(OCNaroWrappers::OCTColStd_HArray1OfReal^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_FEmTool_ListNodeOfListOfVectors(new FEmTool_ListNodeOfListOfVectors(*((Handle_TColStd_HArray1OfReal*)I->Handle), n));
}

OCTColStd_HArray1OfReal^ OCFEmTool_ListNodeOfListOfVectors::Value()
{
  Handle(TColStd_HArray1OfReal) tmp = (*((Handle_FEmTool_ListNodeOfListOfVectors*)nativeHandle))->Value();
  return gcnew OCTColStd_HArray1OfReal(&tmp);
}


