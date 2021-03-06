// File generated by CPPExt (MPV)
//
#ifndef _IntAna_ListOfCurve_OCWrappers_HeaderFile
#define _IntAna_ListOfCurve_OCWrappers_HeaderFile

// include native header
#include <IntAna_ListOfCurve.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCIntAna_ListIteratorOfListOfCurve;
ref class OCIntAna_Curve;
ref class OCIntAna_ListNodeOfListOfCurve;



public ref class OCIntAna_ListOfCurve  {

protected:
  IntAna_ListOfCurve* nativeHandle;
  OCIntAna_ListOfCurve(OCDummy^) {};

public:
  property IntAna_ListOfCurve* Handle
  {
    IntAna_ListOfCurve* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntAna_ListOfCurve(IntAna_ListOfCurve* nativeHandle);

// Methods PUBLIC


OCIntAna_ListOfCurve();


 /*instead*/  void Assign(OCNaroWrappers::OCIntAna_ListOfCurve^ Other) ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntAna_Curve^ I) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntAna_Curve^ I, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ theIt) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIntAna_ListOfCurve^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntAna_Curve^ I) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntAna_Curve^ I, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ theIt) ;


 /*instead*/  void Append(OCNaroWrappers::OCIntAna_ListOfCurve^ Other) ;


 /*instead*/  OCIntAna_Curve^ First() ;


 /*instead*/  OCIntAna_Curve^ Last() ;


 /*instead*/  void RemoveFirst() ;


 /*instead*/  void Remove(OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCIntAna_Curve^ I, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ It) ;


 /*instead*/  void InsertBefore(OCNaroWrappers::OCIntAna_ListOfCurve^ Other, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCIntAna_Curve^ I, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ It) ;


 /*instead*/  void InsertAfter(OCNaroWrappers::OCIntAna_ListOfCurve^ Other, OCNaroWrappers::OCIntAna_ListIteratorOfListOfCurve^ It) ;

~OCIntAna_ListOfCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
