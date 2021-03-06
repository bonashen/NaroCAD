// File generated by CPPExt (CPP file)
//

#include "Extrema_PCFOfEPCOfExtPC2d.h"
#include "../Converter.h"
#include "../Adaptor2d/Adaptor2d_Curve2d.h"
#include "Extrema_Curve2dTool.h"
#include "Extrema_POnCurv2d.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"
#include "Extrema_SeqPCOfPCFOfEPCOfExtPC2d.h"
#include "Extrema_SequenceNodeOfSeqPCOfPCFOfEPCOfExtPC2d.h"


using namespace OCNaroWrappers;

OCExtrema_PCFOfEPCOfExtPC2d::OCExtrema_PCFOfEPCOfExtPC2d(Extrema_PCFOfEPCOfExtPC2d* nativeHandle) : OCmath_FunctionWithDerivative((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCExtrema_PCFOfEPCOfExtPC2d::OCExtrema_PCFOfEPCOfExtPC2d() : OCmath_FunctionWithDerivative((OCDummy^)nullptr)

{
  nativeHandle = new Extrema_PCFOfEPCOfExtPC2d();
}

OCExtrema_PCFOfEPCOfExtPC2d::OCExtrema_PCFOfEPCOfExtPC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCAdaptor2d_Curve2d^ C) : OCmath_FunctionWithDerivative((OCDummy^)nullptr)

{
  nativeHandle = new Extrema_PCFOfEPCOfExtPC2d(*((gp_Pnt2d*)P->Handle), *((Adaptor2d_Curve2d*)C->Handle));
}

 void OCExtrema_PCFOfEPCOfExtPC2d::Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C)
{
  ((Extrema_PCFOfEPCOfExtPC2d*)nativeHandle)->Initialize(*((Adaptor2d_Curve2d*)C->Handle));
}

 void OCExtrema_PCFOfEPCOfExtPC2d::SetPoint(OCNaroWrappers::OCgp_Pnt2d^ P)
{
  ((Extrema_PCFOfEPCOfExtPC2d*)nativeHandle)->SetPoint(*((gp_Pnt2d*)P->Handle));
}

 System::Boolean OCExtrema_PCFOfEPCOfExtPC2d::Value(Standard_Real U, Standard_Real& F)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_PCFOfEPCOfExtPC2d*)nativeHandle)->Value(U, F));
}

 System::Boolean OCExtrema_PCFOfEPCOfExtPC2d::Derivative(Standard_Real U, Standard_Real& DF)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_PCFOfEPCOfExtPC2d*)nativeHandle)->Derivative(U, DF));
}

 System::Boolean OCExtrema_PCFOfEPCOfExtPC2d::Values(Standard_Real U, Standard_Real& F, Standard_Real& DF)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_PCFOfEPCOfExtPC2d*)nativeHandle)->Values(U, F, DF));
}

 Standard_Integer OCExtrema_PCFOfEPCOfExtPC2d::GetStateNumber()
{
  return ((Extrema_PCFOfEPCOfExtPC2d*)nativeHandle)->GetStateNumber();
}

 Standard_Integer OCExtrema_PCFOfEPCOfExtPC2d::NbExt()
{
  return ((Extrema_PCFOfEPCOfExtPC2d*)nativeHandle)->NbExt();
}

 Standard_Real OCExtrema_PCFOfEPCOfExtPC2d::SquareDistance(Standard_Integer N)
{
  return ((Extrema_PCFOfEPCOfExtPC2d*)nativeHandle)->SquareDistance(N);
}

 System::Boolean OCExtrema_PCFOfEPCOfExtPC2d::IsMin(Standard_Integer N)
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_PCFOfEPCOfExtPC2d*)nativeHandle)->IsMin(N));
}

OCExtrema_POnCurv2d^ OCExtrema_PCFOfEPCOfExtPC2d::Point(Standard_Integer N)
{
  Extrema_POnCurv2d* tmp = new Extrema_POnCurv2d();
  *tmp = ((Extrema_PCFOfEPCOfExtPC2d*)nativeHandle)->Point(N);
  return gcnew OCExtrema_POnCurv2d(tmp);
}


