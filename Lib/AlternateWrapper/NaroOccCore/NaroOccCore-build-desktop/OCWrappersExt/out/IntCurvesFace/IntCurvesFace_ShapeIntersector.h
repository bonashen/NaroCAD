// File generated by CPPExt (MPV)
//
#ifndef _IntCurvesFace_ShapeIntersector_OCWrappers_HeaderFile
#define _IntCurvesFace_ShapeIntersector_OCWrappers_HeaderFile

// include native header
#include <IntCurvesFace_ShapeIntersector.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_SequenceOfInteger.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../IntCurveSurface/IntCurveSurface_TransitionOnCurve.h"
#include "../TopAbs/TopAbs_State.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCgp_Lin;
ref class OCAdaptor3d_HCurve;
ref class OCgp_Pnt;
ref class OCTopoDS_Face;



public ref class OCIntCurvesFace_ShapeIntersector  {

protected:
  IntCurvesFace_ShapeIntersector* nativeHandle;
  OCIntCurvesFace_ShapeIntersector(OCDummy^) {};

public:
  property IntCurvesFace_ShapeIntersector* Handle
  {
    IntCurvesFace_ShapeIntersector* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntCurvesFace_ShapeIntersector(IntCurvesFace_ShapeIntersector* nativeHandle);

// Methods PUBLIC


OCIntCurvesFace_ShapeIntersector();


 /*instead*/  void Load(OCNaroWrappers::OCTopoDS_Shape^ Sh, Standard_Real Tol) ;

//! Perform the intersection between the <br>
//!          segment L and the loaded shape. <br>
//! <br>
//!          PInf is the smallest parameter on the line <br>
//!          PSup is the highest  parammter on the line <br>
//! <br>
//!          For an infinite line PInf and PSup can be <br>
//!          +/- RealLast. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCgp_Lin^ L, Standard_Real PInf, Standard_Real PSup) ;

//! Perform the intersection between the <br>
//!          segment L and the loaded shape. <br>
//! <br>
//!          PInf is the smallest parameter on the line <br>
//!          PSup is the highest  parammter on the line <br>
//! <br>
//!          For an infinite line PInf and PSup can be <br>
//!          +/- RealLast. <br>
 /*instead*/  void PerformNearest(OCNaroWrappers::OCgp_Lin^ L, Standard_Real PInf, Standard_Real PSup) ;

//! same method for a HCurve from Adaptor3d. <br>
//!           PInf an PSup can also be - and + INF. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HCurve^ HCu, Standard_Real PInf, Standard_Real PSup) ;

//! True is returned when the intersection have been computed. <br>
 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  Standard_Integer NbPnt() ;

//! Returns the U parameter of the ith intersection point <br>
//!          on the surface. <br>
 /*instead*/  Standard_Real UParameter(Standard_Integer I) ;

//! Returns the V parameter of the ith intersection point <br>
//!          on the surface. <br>
 /*instead*/  Standard_Real VParameter(Standard_Integer I) ;

//! Returns the parameter of the ith intersection point <br>
//!          on the line. <br>
 /*instead*/  Standard_Real WParameter(Standard_Integer I) ;

//! Returns the geometric point of the ith intersection <br>
//!          between the line and the surface. <br>
 /*instead*/  OCgp_Pnt^ Pnt(Standard_Integer I) ;

//! Returns the ith transition of the line on the surface. <br>
 /*instead*/  OCIntCurveSurface_TransitionOnCurve Transition(Standard_Integer I) ;

//! Returns the ith state of the point on the face. <br>
//!          The values can be either TopAbs_IN <br>
//!             ( the point is in the face) <br>
//!           or TopAbs_ON <br>
//!             ( the point is on a boudary of the face). <br>
 /*instead*/  OCTopAbs_State State(Standard_Integer I) ;

//! Returns the significant face used to determine <br>
//!          the intersection. <br>
//! <br>
 /*instead*/  OCTopoDS_Face^ Face(Standard_Integer I) ;

//! Internal method. Sort the result on the Curve <br>
//!          parameter. <br>
 /*instead*/  void SortResult() ;

~OCIntCurvesFace_ShapeIntersector()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
