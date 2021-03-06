// File generated by CPPExt (MPV)
//
#ifndef _MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial_OCWrappers_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial_OCWrappers_HeaderFile

// include native header
#include <MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCGraphic3d_MaterialAspect;
ref class OCTColStd_MapIntegerHasher;
ref class OCMeshVS_DataMapOfIntegerMaterial;
ref class OCMeshVS_DataMapNodeOfDataMapOfIntegerMaterial;



public ref class OCMeshVS_DataMapIteratorOfDataMapOfIntegerMaterial  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMeshVS_DataMapIteratorOfDataMapOfIntegerMaterial(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_DataMapIteratorOfDataMapOfIntegerMaterial(MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial* nativeHandle);

// Methods PUBLIC


OCMeshVS_DataMapIteratorOfDataMapOfIntegerMaterial();


OCMeshVS_DataMapIteratorOfDataMapOfIntegerMaterial(OCNaroWrappers::OCMeshVS_DataMapOfIntegerMaterial^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMeshVS_DataMapOfIntegerMaterial^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCGraphic3d_MaterialAspect^ Value() ;

~OCMeshVS_DataMapIteratorOfDataMapOfIntegerMaterial()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
