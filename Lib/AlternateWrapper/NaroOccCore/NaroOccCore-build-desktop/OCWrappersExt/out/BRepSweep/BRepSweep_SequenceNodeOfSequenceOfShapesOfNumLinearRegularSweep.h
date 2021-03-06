// File generated by CPPExt (Transient)
//
#ifndef _BRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep_OCWrappers_HeaderFile
#define _BRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBRepSweep_SequenceOfShapesOfNumLinearRegularSweep;



public ref class OCBRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCBRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep(Handle(BRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep)* nativeHandle);

// Methods PUBLIC


OCBRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep(OCNaroWrappers::OCTopoDS_Shape^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCTopoDS_Shape^ Value() ;

~OCBRepSweep_SequenceNodeOfSequenceOfShapesOfNumLinearRegularSweep()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
