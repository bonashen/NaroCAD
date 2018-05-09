// File generated by CPPExt (CPP file)
//

#include "AppDef_ResConstraintOfMyGradientbisOfBSplineCompute.h"
#include "../Converter.h"
#include "AppDef_MultiLine.h"
#include "AppDef_MyLineTool.h"
#include "../AppParCurves/AppParCurves_MultiCurve.h"
#include "../AppParCurves/AppParCurves_HArray1OfConstraintCouple.h"
#include "../math/math_Matrix.h"
#include "../math/math_Vector.h"


using namespace OCNaroWrappers;

OCAppDef_ResConstraintOfMyGradientbisOfBSplineCompute::OCAppDef_ResConstraintOfMyGradientbisOfBSplineCompute(AppDef_ResConstraintOfMyGradientbisOfBSplineCompute* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAppDef_ResConstraintOfMyGradientbisOfBSplineCompute::OCAppDef_ResConstraintOfMyGradientbisOfBSplineCompute(OCNaroWrappers::OCAppDef_MultiLine^ SSP, OCNaroWrappers::OCAppParCurves_MultiCurve^ SCurv, Standard_Integer FirstPoint, Standard_Integer LastPoint, OCNaroWrappers::OCAppParCurves_HArray1OfConstraintCouple^ Constraints, OCNaroWrappers::OCmath_Matrix^ Bern, OCNaroWrappers::OCmath_Matrix^ DerivativeBern, Standard_Real Tolerance) 
{
  nativeHandle = new AppDef_ResConstraintOfMyGradientbisOfBSplineCompute(*((AppDef_MultiLine*)SSP->Handle), *((AppParCurves_MultiCurve*)SCurv->Handle), FirstPoint, LastPoint, *((Handle_AppParCurves_HArray1OfConstraintCouple*)Constraints->Handle), *((math_Matrix*)Bern->Handle), *((math_Matrix*)DerivativeBern->Handle), Tolerance);
}

 System::Boolean OCAppDef_ResConstraintOfMyGradientbisOfBSplineCompute::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((AppDef_ResConstraintOfMyGradientbisOfBSplineCompute*)nativeHandle)->IsDone());
}

 Standard_Real OCAppDef_ResConstraintOfMyGradientbisOfBSplineCompute::Error()
{
  return ((AppDef_ResConstraintOfMyGradientbisOfBSplineCompute*)nativeHandle)->Error();
}

OCmath_Matrix^ OCAppDef_ResConstraintOfMyGradientbisOfBSplineCompute::ConstraintMatrix()
{
  math_Matrix* tmp = new math_Matrix(0, 0, 0, 0);
  *tmp = ((AppDef_ResConstraintOfMyGradientbisOfBSplineCompute*)nativeHandle)->ConstraintMatrix();
  return gcnew OCmath_Matrix(tmp);
}

OCmath_Vector^ OCAppDef_ResConstraintOfMyGradientbisOfBSplineCompute::Duale()
{
  math_Vector* tmp = new math_Vector(0, 0);
  *tmp = ((AppDef_ResConstraintOfMyGradientbisOfBSplineCompute*)nativeHandle)->Duale();
  return gcnew OCmath_Vector(tmp);
}

OCmath_Matrix^ OCAppDef_ResConstraintOfMyGradientbisOfBSplineCompute::ConstraintDerivative(OCNaroWrappers::OCAppDef_MultiLine^ SSP, OCNaroWrappers::OCmath_Vector^ Parameters, Standard_Integer Deg, OCNaroWrappers::OCmath_Matrix^ DA)
{
  math_Matrix* tmp = new math_Matrix(0, 0, 0, 0);
  *tmp = ((AppDef_ResConstraintOfMyGradientbisOfBSplineCompute*)nativeHandle)->ConstraintDerivative(*((AppDef_MultiLine*)SSP->Handle), *((math_Vector*)Parameters->Handle), Deg, *((math_Matrix*)DA->Handle));
  return gcnew OCmath_Matrix(tmp);
}

OCmath_Matrix^ OCAppDef_ResConstraintOfMyGradientbisOfBSplineCompute::InverseMatrix()
{
  math_Matrix* tmp = new math_Matrix(0, 0, 0, 0);
  *tmp = ((AppDef_ResConstraintOfMyGradientbisOfBSplineCompute*)nativeHandle)->InverseMatrix();
  return gcnew OCmath_Matrix(tmp);
}

