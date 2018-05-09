// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_SequenceOfSegmentOfTheSOnBounds_OCWrappers_HeaderFile
#define _IntPatch_SequenceOfSegmentOfTheSOnBounds_OCWrappers_HeaderFile

// include native header
#include <IntPatch_SequenceOfSegmentOfTheSOnBounds.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCIntPatch_TheSegmentOfTheSOnBounds;
ref class OCIntPatch_SequenceNodeOfSequenceOfSegmentOfTheSOnBounds;



public ref class OCIntPatch_SequenceOfSegmentOfTheSOnBounds  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCIntPatch_SequenceOfSegmentOfTheSOnBounds(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_SequenceOfSegmentOfTheSOnBounds(IntPatch_SequenceOfSegmentOfTheSOnBounds* nativeHandle);

// Methods PUBLIC


OCIntPatch_SequenceOfSegmentOfTheSOnBounds();


 /*instead*/  OCIntPatch_SequenceOfSegmentOfTheSOnBounds^ Assign(OCNaroWrappers::OCIntPatch_SequenceOfSegmentOfTheSOnBounds^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntPatch_TheSegmentOfTheSOnBounds^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntPatch_SequenceOfSegmentOfTheSOnBounds^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntPatch_TheSegmentOfTheSOnBounds^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntPatch_SequenceOfSegmentOfTheSOnBounds^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheSegmentOfTheSOnBounds^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfSegmentOfTheSOnBounds^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheSegmentOfTheSOnBounds^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfSegmentOfTheSOnBounds^ S) ;


 /*instead*/  OCIntPatch_TheSegmentOfTheSOnBounds^ First() ;


 /*instead*/  OCIntPatch_TheSegmentOfTheSOnBounds^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCIntPatch_SequenceOfSegmentOfTheSOnBounds^ Sub) ;


 /*instead*/  OCIntPatch_TheSegmentOfTheSOnBounds^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCIntPatch_TheSegmentOfTheSOnBounds^ I) ;


 /*instead*/  OCIntPatch_TheSegmentOfTheSOnBounds^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCIntPatch_SequenceOfSegmentOfTheSOnBounds()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif