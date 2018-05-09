// File generated by CPPExt (Transient)
//
#ifndef _IntSurf_SequenceNodeOfSequenceOfInteriorPoint_OCWrappers_HeaderFile
#define _IntSurf_SequenceNodeOfSequenceOfInteriorPoint_OCWrappers_HeaderFile

// include the wrapped class
#include <IntSurf_SequenceNodeOfSequenceOfInteriorPoint.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "IntSurf_InteriorPoint.h"


namespace OCNaroWrappers
{

ref class OCIntSurf_InteriorPoint;
ref class OCIntSurf_SequenceOfInteriorPoint;



public ref class OCIntSurf_SequenceNodeOfSequenceOfInteriorPoint : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCIntSurf_SequenceNodeOfSequenceOfInteriorPoint(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntSurf_SequenceNodeOfSequenceOfInteriorPoint(Handle(IntSurf_SequenceNodeOfSequenceOfInteriorPoint)* nativeHandle);

// Methods PUBLIC


OCIntSurf_SequenceNodeOfSequenceOfInteriorPoint(OCNaroWrappers::OCIntSurf_InteriorPoint^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCIntSurf_InteriorPoint^ Value() ;

~OCIntSurf_SequenceNodeOfSequenceOfInteriorPoint()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif