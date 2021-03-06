// File generated by CPPExt (CPP file)
//

#include "BOP_ListNodeOfListOfEdgeInfo.h"
#include "../Converter.h"
#include "BOP_EdgeInfo.h"
#include "BOP_ListOfEdgeInfo.h"
#include "BOP_ListIteratorOfListOfEdgeInfo.h"


using namespace OCNaroWrappers;

OCBOP_ListNodeOfListOfEdgeInfo::OCBOP_ListNodeOfListOfEdgeInfo(Handle(BOP_ListNodeOfListOfEdgeInfo)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BOP_ListNodeOfListOfEdgeInfo(*nativeHandle);
}

OCBOP_ListNodeOfListOfEdgeInfo::OCBOP_ListNodeOfListOfEdgeInfo(OCNaroWrappers::OCBOP_EdgeInfo^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BOP_ListNodeOfListOfEdgeInfo(new BOP_ListNodeOfListOfEdgeInfo(*((BOP_EdgeInfo*)I->Handle), n));
}

OCBOP_EdgeInfo^ OCBOP_ListNodeOfListOfEdgeInfo::Value()
{
  BOP_EdgeInfo* tmp = new BOP_EdgeInfo();
  *tmp = (*((Handle_BOP_ListNodeOfListOfEdgeInfo*)nativeHandle))->Value();
  return gcnew OCBOP_EdgeInfo(tmp);
}


