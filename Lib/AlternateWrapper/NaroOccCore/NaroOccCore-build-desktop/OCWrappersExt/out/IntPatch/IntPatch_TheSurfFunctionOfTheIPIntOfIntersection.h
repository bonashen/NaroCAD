// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_TheSurfFunctionOfTheIPIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_TheSurfFunctionOfTheIPIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_TheSurfFunctionOfTheIPIntOfIntersection.hxx>
#include "../Converter.h"

#include "../math/math_FunctionSetWithDerivatives.h"

#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Dir2d.h"
#include "../math/math_FunctionSetWithDerivatives.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HSurface;
ref class OCIntPatch_HSurfaceTool;
ref class OCIntSurf_Quadric;
ref class OCIntSurf_QuadricTool;
ref class OCmath_Vector;
ref class OCmath_Matrix;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCgp_Dir2d;



public ref class OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection  : public OCmath_FunctionSetWithDerivatives {

protected:
  // dummy constructor;
  OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection(OCDummy^) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection(IntPatch_TheSurfFunctionOfTheIPIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection();


OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection(OCNaroWrappers::OCAdaptor3d_HSurface^ PS, OCNaroWrappers::OCIntSurf_Quadric^ IS);


OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection(OCNaroWrappers::OCIntSurf_Quadric^ IS);


 /*instead*/  void Set(OCNaroWrappers::OCAdaptor3d_HSurface^ PS) ;


 /*instead*/  void SetImplicitSurface(OCNaroWrappers::OCIntSurf_Quadric^ IS) ;


 /*instead*/  void Set(Standard_Real Tolerance) ;


 /*instead*/  Standard_Integer NbVariables() ;


 /*instead*/  Standard_Integer NbEquations() ;


 /*instead*/  System::Boolean Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F) ;


 /*instead*/  System::Boolean Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D) ;


 /*instead*/  System::Boolean Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D) ;


 /*instead*/  Standard_Real Root() ;


 /*instead*/  Standard_Real Tolerance() ;


 /*instead*/  OCgp_Pnt^ Point() ;


 /*instead*/  System::Boolean IsTangent() ;


 /*instead*/  OCgp_Vec^ Direction3d() ;


 /*instead*/  OCgp_Dir2d^ Direction2d() ;


 /*instead*/  OCAdaptor3d_HSurface^ PSurface() ;


 /*instead*/  OCIntSurf_Quadric^ ISurface() ;

~OCIntPatch_TheSurfFunctionOfTheIPIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif