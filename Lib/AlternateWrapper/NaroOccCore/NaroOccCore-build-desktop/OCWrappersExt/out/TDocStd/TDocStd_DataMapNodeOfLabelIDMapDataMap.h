// File generated by CPPExt (Transient)
//
#ifndef _TDocStd_DataMapNodeOfLabelIDMapDataMap_OCWrappers_HeaderFile
#define _TDocStd_DataMapNodeOfLabelIDMapDataMap_OCWrappers_HeaderFile

// include the wrapped class
#include <TDocStd_DataMapNodeOfLabelIDMapDataMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TDF/TDF_Label.h"
#include "../TDF/TDF_IDMap.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTDF_IDMap;
ref class OCTDF_LabelMapHasher;
ref class OCTDocStd_LabelIDMapDataMap;
ref class OCTDocStd_DataMapIteratorOfLabelIDMapDataMap;



public ref class OCTDocStd_DataMapNodeOfLabelIDMapDataMap : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTDocStd_DataMapNodeOfLabelIDMapDataMap(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDocStd_DataMapNodeOfLabelIDMapDataMap(Handle(TDocStd_DataMapNodeOfLabelIDMapDataMap)* nativeHandle);

// Methods PUBLIC


OCTDocStd_DataMapNodeOfLabelIDMapDataMap(OCNaroWrappers::OCTDF_Label^ K, OCNaroWrappers::OCTDF_IDMap^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTDF_Label^ Key() ;


 /*instead*/  OCTDF_IDMap^ Value() ;

~OCTDocStd_DataMapNodeOfLabelIDMapDataMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif