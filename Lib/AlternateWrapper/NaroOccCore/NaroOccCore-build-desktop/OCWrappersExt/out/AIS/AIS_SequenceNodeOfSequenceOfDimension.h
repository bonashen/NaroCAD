// File generated by CPPExt (Transient)
//
#ifndef _AIS_SequenceNodeOfSequenceOfDimension_OCWrappers_HeaderFile
#define _AIS_SequenceNodeOfSequenceOfDimension_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS_SequenceNodeOfSequenceOfDimension.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCAIS_Relation;
ref class OCAIS_SequenceOfDimension;



public ref class OCAIS_SequenceNodeOfSequenceOfDimension : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCAIS_SequenceNodeOfSequenceOfDimension(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_SequenceNodeOfSequenceOfDimension(Handle(AIS_SequenceNodeOfSequenceOfDimension)* nativeHandle);

// Methods PUBLIC


OCAIS_SequenceNodeOfSequenceOfDimension(OCNaroWrappers::OCAIS_Relation^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCAIS_Relation^ Value() ;

~OCAIS_SequenceNodeOfSequenceOfDimension()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif