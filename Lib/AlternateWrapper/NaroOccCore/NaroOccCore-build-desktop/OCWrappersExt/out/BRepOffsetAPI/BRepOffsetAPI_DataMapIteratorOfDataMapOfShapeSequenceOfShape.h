// File generated by CPPExt (MPV)
//
#ifndef _BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape_OCWrappers_HeaderFile
#define _BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape_OCWrappers_HeaderFile

// include native header
#include <BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_SequenceOfShape;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepOffsetAPI_DataMapOfShapeSequenceOfShape;
ref class OCBRepOffsetAPI_DataMapNodeOfDataMapOfShapeSequenceOfShape;



public ref class OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape(BRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape* nativeHandle);

// Methods PUBLIC


OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape();


OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape(OCNaroWrappers::OCBRepOffsetAPI_DataMapOfShapeSequenceOfShape^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepOffsetAPI_DataMapOfShapeSequenceOfShape^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCTopTools_SequenceOfShape^ Value() ;

~OCBRepOffsetAPI_DataMapIteratorOfDataMapOfShapeSequenceOfShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
