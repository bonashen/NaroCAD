// File generated by CPPExt (MPV)
//
#ifndef _Intf_InterferencePolygon2d_OCWrappers_HeaderFile
#define _Intf_InterferencePolygon2d_OCWrappers_HeaderFile

// include native header
#include <Intf_InterferencePolygon2d.hxx>
#include "../Converter.h"

#include "Intf_Interference.h"

#include "Intf_Interference.h"


namespace OCNaroWrappers
{

ref class OCIntf_Polygon2d;
ref class OCgp_Pnt2d;


//! Computes the  interference between two  polygons or <br>
//!          the    self intersection of    a  polygon  in  two <br>
//!          dimensions. <br>
public ref class OCIntf_InterferencePolygon2d  : public OCIntf_Interference {

protected:
  // dummy constructor;
  OCIntf_InterferencePolygon2d(OCDummy^) : OCIntf_Interference((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntf_InterferencePolygon2d(Intf_InterferencePolygon2d* nativeHandle);

// Methods PUBLIC

//! Constructs an empty interference of Polygon. <br>
OCIntf_InterferencePolygon2d();

//! Constructs and computes an interference between two Polygons. <br>
OCIntf_InterferencePolygon2d(OCNaroWrappers::OCIntf_Polygon2d^ Obje1, OCNaroWrappers::OCIntf_Polygon2d^ Obje2);

//! Constructs and computes the auto interference of a Polygon. <br>
OCIntf_InterferencePolygon2d(OCNaroWrappers::OCIntf_Polygon2d^ Obje);

//! Computes an interference between two Polygons. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCIntf_Polygon2d^ Obje1, OCNaroWrappers::OCIntf_Polygon2d^ Obje2) ;

//! Computes the self interference of a Polygon. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCIntf_Polygon2d^ Obje) ;

//! Gives the  geometrical 2d point   of the  intersection <br>
//!          point at address <Index> in the interference. <br>
 /*instead*/  OCgp_Pnt2d^ Pnt2dValue(Standard_Integer Index) ;

~OCIntf_InterferencePolygon2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif