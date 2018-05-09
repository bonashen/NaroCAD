// File generated by CPPExt (MPV)
//
#ifndef _MDF_DataMapIteratorOfTypeASDriverMap_OCWrappers_HeaderFile
#define _MDF_DataMapIteratorOfTypeASDriverMap_OCWrappers_HeaderFile

// include native header
#include <MDF_DataMapIteratorOfTypeASDriverMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCStandard_Type;
ref class OCMDF_ASDriver;
ref class OCTColStd_MapTransientHasher;
ref class OCMDF_TypeASDriverMap;
ref class OCMDF_DataMapNodeOfTypeASDriverMap;



public ref class OCMDF_DataMapIteratorOfTypeASDriverMap  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMDF_DataMapIteratorOfTypeASDriverMap(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMDF_DataMapIteratorOfTypeASDriverMap(MDF_DataMapIteratorOfTypeASDriverMap* nativeHandle);

// Methods PUBLIC


OCMDF_DataMapIteratorOfTypeASDriverMap();


OCMDF_DataMapIteratorOfTypeASDriverMap(OCNaroWrappers::OCMDF_TypeASDriverMap^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMDF_TypeASDriverMap^ aMap) ;


 /*instead*/  OCStandard_Type^ Key() ;


 /*instead*/  OCMDF_ASDriver^ Value() ;

~OCMDF_DataMapIteratorOfTypeASDriverMap()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif