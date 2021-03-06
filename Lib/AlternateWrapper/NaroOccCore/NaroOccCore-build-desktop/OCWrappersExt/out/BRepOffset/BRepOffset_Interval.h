// File generated by CPPExt (MPV)
//
#ifndef _BRepOffset_Interval_OCWrappers_HeaderFile
#define _BRepOffset_Interval_OCWrappers_HeaderFile

// include native header
#include <BRepOffset_Interval.hxx>
#include "../Converter.h"


#include "BRepOffset_Type.h"


namespace OCNaroWrappers
{




public ref class OCBRepOffset_Interval  {

protected:
  BRepOffset_Interval* nativeHandle;
  OCBRepOffset_Interval(OCDummy^) {};

public:
  property BRepOffset_Interval* Handle
  {
    BRepOffset_Interval* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepOffset_Interval(BRepOffset_Interval* nativeHandle);

// Methods PUBLIC


OCBRepOffset_Interval();


OCBRepOffset_Interval(Standard_Real U1, Standard_Real U2, OCBRepOffset_Type Type);


 /*instead*/  void First(Standard_Real U) ;


 /*instead*/  void Last(Standard_Real U) ;


 /*instead*/  void Type(OCBRepOffset_Type T) ;


 /*instead*/  Standard_Real First() ;


 /*instead*/  Standard_Real Last() ;


 /*instead*/  OCBRepOffset_Type Type() ;

~OCBRepOffset_Interval()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
