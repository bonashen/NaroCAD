// File generated by CPPExt (Transient)
//
#ifndef _PColStd_SeqNodeOfHSequenceOfInteger_OCWrappers_HeaderFile
#define _PColStd_SeqNodeOfHSequenceOfInteger_OCWrappers_HeaderFile

// include the wrapped class
#include <PColStd_SeqNodeOfHSequenceOfInteger.hxx>
#include "../Converter.h"

#include "../PMMgt/PMMgt_PManaged.h"



namespace OCNaroWrappers
{

ref class OCPColStd_HSequenceOfInteger;
ref class OCPColStd_SeqExplorerOfHSequenceOfInteger;



public ref class OCPColStd_SeqNodeOfHSequenceOfInteger : OCPMMgt_PManaged {

protected:
  // dummy constructor;
  OCPColStd_SeqNodeOfHSequenceOfInteger(OCDummy^) : OCPMMgt_PManaged((OCDummy^)nullptr) {};

public:

// constructor from native
OCPColStd_SeqNodeOfHSequenceOfInteger(Handle(PColStd_SeqNodeOfHSequenceOfInteger)* nativeHandle);

// Methods PUBLIC


OCPColStd_SeqNodeOfHSequenceOfInteger(OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ TheLast, Standard_Integer TheItem);


OCPColStd_SeqNodeOfHSequenceOfInteger(Standard_Integer TheItem, OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ TheFirst);


OCPColStd_SeqNodeOfHSequenceOfInteger(OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ ThePrevious, OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ TheNext, Standard_Integer TheItem);


 /*instead*/  Standard_Integer Value() ;


 /*instead*/  OCPColStd_SeqNodeOfHSequenceOfInteger^ Next() ;


 /*instead*/  OCPColStd_SeqNodeOfHSequenceOfInteger^ Previous() ;


 /*instead*/  void SetValue(Standard_Integer AnItem) ;


 /*instead*/  void SetNext(OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ ANode) ;


 /*instead*/  void SetPrevious(OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ ANode) ;

~OCPColStd_SeqNodeOfHSequenceOfInteger()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif