// File generated by CPPExt (MPV)
//
#ifndef _GC_MakeCylindricalSurface_OCWrappers_HeaderFile
#define _GC_MakeCylindricalSurface_OCWrappers_HeaderFile

// include native header
#include <GC_MakeCylindricalSurface.hxx>
#include "../Converter.h"

#include "GC_Root.h"

#include "GC_Root.h"


namespace OCNaroWrappers
{

ref class OCGeom_CylindricalSurface;
ref class OCgp_Ax2;
ref class OCgp_Cylinder;
ref class OCgp_Pnt;
ref class OCgp_Ax1;
ref class OCgp_Circ;


//! This class implements the following algorithms used <br>
//!           to create a CylindricalSurface from Geom. <br>
//!           * Create a CylindricalSurface parallel to another and <br>
//!           passing through a point. <br>
//!           * Create a CylindricalSurface parallel to another at a <br>
//!           distance <br>
//!             <Dist>. <br>
//!           * Create a CylindricalSurface passing through 3 points. <br>
//!           * Create a CylindricalSurface by its axis and radius. <br>
//!           * Create a cylindricalSurface by its circular base. <br>
//!  The local coordinate system of the CylindricalSurface is defined <br>
//!  with an axis placement (see class ElementarySurface). <br>
//! <br>
//!  The "ZAxis" is the symmetry axis of the CylindricalSurface, <br>
//!  it gives the direction of increasing parametric value V. <br>
//! <br>
//!  The parametrization range is : <br>
//!       U [0, 2*PI],  V ]- infinite, + infinite[ <br>
//! <br>
//!  The "XAxis" and the "YAxis" define the placement plane of the <br>
//!  surface (Z = 0, and parametric value V = 0)  perpendicular to <br>
//!  the symmetry axis. The "XAxis" defines the origin of the <br>
//!  parameter U = 0.  The trigonometric sense gives the positive <br>
//!  orientation for the parameter U. <br>
public ref class OCGC_MakeCylindricalSurface  : public OCGC_Root {

protected:
  // dummy constructor;
  OCGC_MakeCylindricalSurface(OCDummy^) : OCGC_Root((OCDummy^)nullptr) {};

public:

// constructor from native
OCGC_MakeCylindricalSurface(GC_MakeCylindricalSurface* nativeHandle);

// Methods PUBLIC


//!  A2 defines the local coordinate system of the cylindrical surface. <br>
//!  The "ZDirection" of A2 defines the direction of the surface's <br>
//!  axis of symmetry. <br>
//!  At the creation the parametrization of the surface is defined <br>
//!  such that the normal Vector (N = D1U ^ D1V) is oriented towards <br>
//!  the "outside region" of the surface. <br>
//! Warnings : <br>
//!  It is not forbidden to create a cylindrical surface with <br>
//!  Radius = 0.0 <br>
//! Status is "NegativeRadius" if Radius < 0.0 <br>
OCGC_MakeCylindricalSurface(OCNaroWrappers::OCgp_Ax2^ A2, Standard_Real Radius);


//!  Creates a CylindricalSurface from a non persistent Cylinder <br>
//!  from package gp. <br>
OCGC_MakeCylindricalSurface(OCNaroWrappers::OCgp_Cylinder^ C);

//! Make a CylindricalSurface from Geom <TheCylinder> <br>
//!           parallel to another <br>
//!           CylindricalSurface <Cylinder> and passing through a <br>
//!           Pnt <Point>. <br>
OCGC_MakeCylindricalSurface(OCNaroWrappers::OCgp_Cylinder^ Cyl, OCNaroWrappers::OCgp_Pnt^ Point);

//! Make a CylindricalSurface from Geom <TheCylinder> <br>
//!           parallel to another <br>
//!           CylindricalSurface <Cylinder> at the distance <Dist> <br>
//!           which can be greater or lower than zero. <br>
//!           The radius of the result is the absolute value of the <br>
//!           radius of <Cyl> plus <Dist> <br>
OCGC_MakeCylindricalSurface(OCNaroWrappers::OCgp_Cylinder^ Cyl, Standard_Real Dist);

//! Make a CylindricalSurface from Geom <TheCylinder> <br>
//!           passing through 3 Pnt <P1>,<P2>,<P3>. <br>
//!           Its axis is <P1P2> and its radius is the distance <br>
//!           between <P3> and <P1P2> <br>
OCGC_MakeCylindricalSurface(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, OCNaroWrappers::OCgp_Pnt^ P3);

//! Make a CylindricalSurface by its axis <Axis> and radius <br>
//!          <Radius>. <br>
OCGC_MakeCylindricalSurface(OCNaroWrappers::OCgp_Ax1^ Axis, Standard_Real Radius);

//! Make a CylindricalSurface by its circular base. <br>
OCGC_MakeCylindricalSurface(OCNaroWrappers::OCgp_Circ^ Circ);

//! Returns the constructed cylinder. <br>
//! Exceptions StdFail_NotDone if no cylinder is constructed. <br>
 /*instead*/  OCGeom_CylindricalSurface^ Value() ;


 /*instead*/  OCGeom_CylindricalSurface^ Operator() ;

~OCGC_MakeCylindricalSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif