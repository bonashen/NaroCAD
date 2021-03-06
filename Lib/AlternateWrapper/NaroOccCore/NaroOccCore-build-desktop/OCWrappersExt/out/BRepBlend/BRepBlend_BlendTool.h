// File generated by CPPExt (MPV)
//
#ifndef _BRepBlend_BlendTool_OCWrappers_HeaderFile
#define _BRepBlend_BlendTool_OCWrappers_HeaderFile

// include native header
#include <BRepBlend_BlendTool.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;
ref class OCAdaptor3d_HSurface;
ref class OCAdaptor2d_HCurve2d;
ref class OCAdaptor3d_HVertex;



public ref class OCBRepBlend_BlendTool  {

protected:
  BRepBlend_BlendTool* nativeHandle;
  OCBRepBlend_BlendTool(OCDummy^) {};

public:
  property BRepBlend_BlendTool* Handle
  {
    BRepBlend_BlendTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepBlend_BlendTool(BRepBlend_BlendTool* nativeHandle);

// Methods PUBLIC

//! Projects the point P on the arc C. <br>
//!          If the methods returns Standard_True, the projection is <br>
//!          successful, and Paramproj is the parameter on the arc <br>
//!          of the projected point, Dist is the distance between <br>
//!          P and the curve.. <br>
//!          If the method returns Standard_False, Param proj and Dist <br>
//!          are not significant. <br>
//! <br>
static /*instead*/  System::Boolean Project(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real& Paramproj, Standard_Real& Dist) ;


static /*instead*/  System::Boolean Inters(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2, OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real& Param, Standard_Real& Dist) ;

//! Returns the parameter of the vertex V on the edge A. <br>
static /*instead*/  Standard_Real Parameter(OCNaroWrappers::OCAdaptor3d_HVertex^ V, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A) ;

//! Returns the parametric tolerance on the arc A <br>
//!          used to consider that the vertex and another point meet, <br>
//!          i-e if Abs(Parameter(Vertex)-Parameter(OtherPnt))<= <br>
//!          Tolerance, the points are "merged". <br>
static /*instead*/  Standard_Real Tolerance(OCNaroWrappers::OCAdaptor3d_HVertex^ V, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A) ;


static /*instead*/  System::Boolean SingularOnUMin(OCNaroWrappers::OCAdaptor3d_HSurface^ S) ;


static /*instead*/  System::Boolean SingularOnUMax(OCNaroWrappers::OCAdaptor3d_HSurface^ S) ;


static /*instead*/  System::Boolean SingularOnVMin(OCNaroWrappers::OCAdaptor3d_HSurface^ S) ;


static /*instead*/  System::Boolean SingularOnVMax(OCNaroWrappers::OCAdaptor3d_HSurface^ S) ;


static /*instead*/  Standard_Integer NbSamplesU(OCNaroWrappers::OCAdaptor3d_HSurface^ S, Standard_Real u1, Standard_Real u2) ;


static /*instead*/  Standard_Integer NbSamplesV(OCNaroWrappers::OCAdaptor3d_HSurface^ S, Standard_Real v1, Standard_Real v2) ;

//! Returns the parametric limits on the arc C. <br>
//!          These limits must be finite : they are either <br>
//!          the real limits of the arc, for a finite arc, <br>
//!          or a bounding box for an infinite arc. <br>
static /*instead*/  void Bounds(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real& Ufirst, Standard_Real& Ulast) ;


static /*instead*/  OCAdaptor2d_HCurve2d^ CurveOnSurf(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, OCNaroWrappers::OCAdaptor3d_HSurface^ S) ;

~OCBRepBlend_BlendTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
