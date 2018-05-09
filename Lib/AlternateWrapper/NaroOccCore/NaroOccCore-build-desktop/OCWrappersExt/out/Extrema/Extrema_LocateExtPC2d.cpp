// File generated by CPPExt (CPP file)
//

#include "Extrema_LocateExtPC2d.h"
#include "../Converter.h"
#include "../Adaptor2d/Adaptor2d_Curve2d.h"
#include "Extrema_Curve2dTool.h"
#include "Extrema_ExtPElC2d.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"
#include "Extrema_POnCurv2d.h"
#include "Extrema_SequenceOfPOnCurv2d.h"
#include "Extrema_ELPCOfLocateExtPC2d.h"
#include "Extrema_EPCOfELPCOfLocateExtPC2d.h"
#include "Extrema_LocEPCOfLocateExtPC2d.h"
#include "Extrema_PCLocFOfLocEPCOfLocateExtPC2d.h"


using namespace OCNaroWrappers;

OCExtrema_LocateExtPC2d::OCExtrema_LocateExtPC2d(Extrema_LocateExtPC2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCExtrema_LocateExtPC2d::OCExtrema_LocateExtPC2d() 
{
  nativeHandle = new Extrema_LocateExtPC2d();
}

OCExtrema_LocateExtPC2d::OCExtrema_LocateExtPC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real U0, Standard_Real TolF) 
{
  nativeHandle = new Extrema_LocateExtPC2d(*((gp_Pnt2d*)P->Handle), *((Adaptor2d_Curve2d*)C->Handle), U0, TolF);
}

OCExtrema_LocateExtPC2d::OCExtrema_LocateExtPC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real U0, Standard_Real Umin, Standard_Real Usup, Standard_Real TolF) 
{
  nativeHandle = new Extrema_LocateExtPC2d(*((gp_Pnt2d*)P->Handle), *((Adaptor2d_Curve2d*)C->Handle), U0, Umin, Usup, TolF);
}

 void OCExtrema_LocateExtPC2d::Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Real Umin, Standard_Real Usup, Standard_Real TolF)
{
  ((Extrema_LocateExtPC2d*)nativeHandle)->Initialize(*((Adaptor2d_Curve2d*)C->Handle), Umin, Usup, TolF);
}

 void OCExtrema_LocateExtPC2d::Perform(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real U0)
{
  ((Extrema_LocateExtPC2d*)nativeHandle)->Perform(*((gp_Pnt2d*)P->Handle), U0);
}

 System::Boolean OCExtrema_LocateExtPC2d::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_LocateExtPC2d*)nativeHandle)->IsDone());
}

 Standard_Real OCExtrema_LocateExtPC2d::SquareDistance()
{
  return ((Extrema_LocateExtPC2d*)nativeHandle)->SquareDistance();
}

 System::Boolean OCExtrema_LocateExtPC2d::IsMin()
{
  return OCConverter::StandardBooleanToBoolean(((Extrema_LocateExtPC2d*)nativeHandle)->IsMin());
}

OCExtrema_POnCurv2d^ OCExtrema_LocateExtPC2d::Point()
{
  Extrema_POnCurv2d* tmp = new Extrema_POnCurv2d();
  *tmp = ((Extrema_LocateExtPC2d*)nativeHandle)->Point();
  return gcnew OCExtrema_POnCurv2d(tmp);
}

