// File generated by CPPExt (MPV)
//
#ifndef _GeomFill_Filling_OCWrappers_HeaderFile
#define _GeomFill_Filling_OCWrappers_HeaderFile

// include native header
#include <GeomFill_Filling.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColgp_HArray2OfPnt;
ref class OCTColStd_HArray2OfReal;
ref class OCTColgp_Array2OfPnt;
ref class OCTColStd_Array2OfReal;



public ref class OCGeomFill_Filling  {

protected:
  GeomFill_Filling* nativeHandle;
  OCGeomFill_Filling(OCDummy^) {};

public:
  property GeomFill_Filling* Handle
  {
    GeomFill_Filling* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomFill_Filling(GeomFill_Filling* nativeHandle);

// Methods PUBLIC


OCGeomFill_Filling();


 /*instead*/  Standard_Integer NbUPoles() ;


 /*instead*/  Standard_Integer NbVPoles() ;


 /*instead*/  void Poles(OCNaroWrappers::OCTColgp_Array2OfPnt^ Poles) ;


 /*instead*/  System::Boolean isRational() ;


 /*instead*/  void Weights(OCNaroWrappers::OCTColStd_Array2OfReal^ Weights) ;

~OCGeomFill_Filling()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif