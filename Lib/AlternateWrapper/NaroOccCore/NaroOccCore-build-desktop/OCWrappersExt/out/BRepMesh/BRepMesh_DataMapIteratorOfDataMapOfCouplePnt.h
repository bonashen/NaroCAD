// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_DataMapIteratorOfDataMapOfCouplePnt_OCWrappers_HeaderFile
#define _BRepMesh_DataMapIteratorOfDataMapOfCouplePnt_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_DataMapIteratorOfDataMapOfCouplePnt.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCMeshShape_Couple;
ref class OCgp_Pnt;
ref class OCMeshShape_CoupleHasher;
ref class OCBRepMesh_DataMapOfCouplePnt;
ref class OCBRepMesh_DataMapNodeOfDataMapOfCouplePnt;



public ref class OCBRepMesh_DataMapIteratorOfDataMapOfCouplePnt  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapIteratorOfDataMapOfCouplePnt(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapIteratorOfDataMapOfCouplePnt(BRepMesh_DataMapIteratorOfDataMapOfCouplePnt* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapIteratorOfDataMapOfCouplePnt();


OCBRepMesh_DataMapIteratorOfDataMapOfCouplePnt(OCNaroWrappers::OCBRepMesh_DataMapOfCouplePnt^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepMesh_DataMapOfCouplePnt^ aMap) ;


 /*instead*/  OCMeshShape_Couple^ Key() ;


 /*instead*/  OCgp_Pnt^ Value() ;

~OCBRepMesh_DataMapIteratorOfDataMapOfCouplePnt()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
