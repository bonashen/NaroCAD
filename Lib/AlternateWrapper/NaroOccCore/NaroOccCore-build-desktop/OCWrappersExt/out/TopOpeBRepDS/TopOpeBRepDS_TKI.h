// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_TKI_OCWrappers_HeaderFile
#define _TopOpeBRepDS_TKI_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_TKI.hxx>
#include "../Converter.h"


#include "TopOpeBRepDS_DataMapIteratorOfDataMapOfIntegerListOfInterference.h"
#include "TopOpeBRepDS_Kind.h"
#include "TopOpeBRepDS_ListOfInterference.h"
#include "../TCollection/TCollection_AsciiString.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_HArray1OfDataMapOfIntegerListOfInterference;
ref class OCTopOpeBRepDS_ListOfInterference;
ref class OCTopOpeBRepDS_Interference;



public ref class OCTopOpeBRepDS_TKI  {

protected:
  TopOpeBRepDS_TKI* nativeHandle;
  OCTopOpeBRepDS_TKI(OCDummy^) {};

public:
  property TopOpeBRepDS_TKI* Handle
  {
    TopOpeBRepDS_TKI* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepDS_TKI(TopOpeBRepDS_TKI* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_TKI();


 /*instead*/  void Clear() ;


 /*instead*/  void FillOnGeometry(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ L) ;


 /*instead*/  void FillOnSupport(OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ L) ;


 /*instead*/  System::Boolean IsBound(OCTopOpeBRepDS_Kind K, Standard_Integer G) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ Interferences(OCTopOpeBRepDS_Kind K, Standard_Integer G) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ ChangeInterferences(OCTopOpeBRepDS_Kind K, Standard_Integer G) ;


 /*instead*/  System::Boolean HasInterferences(OCTopOpeBRepDS_Kind K, Standard_Integer G) ;


 /*instead*/  void Add(OCTopOpeBRepDS_Kind K, Standard_Integer G) ;


 /*instead*/  void Add(OCTopOpeBRepDS_Kind K, Standard_Integer G, OCNaroWrappers::OCTopOpeBRepDS_Interference^ HI) ;


 /*instead*/  void DumpTKI(OCNaroWrappers::OCTCollection_AsciiString^ s1, OCNaroWrappers::OCTCollection_AsciiString^ s2) ;


 /*instead*/  void DumpTKI(OCTopOpeBRepDS_Kind K, OCNaroWrappers::OCTCollection_AsciiString^ s1, OCNaroWrappers::OCTCollection_AsciiString^ s2) ;


 /*instead*/  void DumpTKI(OCTopOpeBRepDS_Kind K, Standard_Integer G, OCNaroWrappers::OCTCollection_AsciiString^ s1, OCNaroWrappers::OCTCollection_AsciiString^ s2) ;


 /*instead*/  void DumpTKI(OCTopOpeBRepDS_Kind K, Standard_Integer G, OCNaroWrappers::OCTopOpeBRepDS_ListOfInterference^ L, OCNaroWrappers::OCTCollection_AsciiString^ s1, OCNaroWrappers::OCTCollection_AsciiString^ s2) ;


 /*instead*/  void DumpTKIIterator(OCNaroWrappers::OCTCollection_AsciiString^ s1, OCNaroWrappers::OCTCollection_AsciiString^ s2) ;


 /*instead*/  void Init() ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ Value(OCTopOpeBRepDS_Kind& K, Standard_Integer& G) ;


 /*instead*/  OCTopOpeBRepDS_ListOfInterference^ ChangeValue(OCTopOpeBRepDS_Kind& K, Standard_Integer& G) ;

~OCTopOpeBRepDS_TKI()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif