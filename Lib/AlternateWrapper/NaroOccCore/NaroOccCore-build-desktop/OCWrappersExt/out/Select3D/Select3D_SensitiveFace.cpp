// File generated by CPPExt (CPP file)
//

#include "Select3D_SensitiveFace.h"
#include "../Converter.h"
#include "../SelectBasics/SelectBasics_EntityOwner.h"
#include "../TColgp/TColgp_Array1OfPnt.h"
#include "../TColgp/TColgp_HArray1OfPnt.h"
#include "../TColgp/TColgp_Array1OfPnt2d.h"
#include "../Bnd/Bnd_Box2d.h"
#include "../gp/gp_Lin.h"
#include "Select3D_SensitiveEntity.h"
#include "../TopLoc/TopLoc_Location.h"


using namespace OCNaroWrappers;

OCSelect3D_SensitiveFace::OCSelect3D_SensitiveFace(Handle(Select3D_SensitiveFace)* nativeHandle) : OCSelect3D_SensitivePoly((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Select3D_SensitiveFace(*nativeHandle);
}

OCSelect3D_SensitiveFace::OCSelect3D_SensitiveFace(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCTColgp_Array1OfPnt^ ThePoints, OCSelect3D_TypeOfSensitivity Sensitivity) : OCSelect3D_SensitivePoly((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Select3D_SensitiveFace(new Select3D_SensitiveFace(*((Handle_SelectBasics_EntityOwner*)OwnerId->Handle), *((TColgp_Array1OfPnt*)ThePoints->Handle), (Select3D_TypeOfSensitivity)Sensitivity));
}

OCSelect3D_SensitiveFace::OCSelect3D_SensitiveFace(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCTColgp_HArray1OfPnt^ ThePoints, OCSelect3D_TypeOfSensitivity Sensitivity) : OCSelect3D_SensitivePoly((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Select3D_SensitiveFace(new Select3D_SensitiveFace(*((Handle_SelectBasics_EntityOwner*)OwnerId->Handle), *((Handle_TColgp_HArray1OfPnt*)ThePoints->Handle), (Select3D_TypeOfSensitivity)Sensitivity));
}

 System::Boolean OCSelect3D_SensitiveFace::Matches(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& DMin)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveFace*)nativeHandle))->Matches(X, Y, aTol, DMin));
}

 System::Boolean OCSelect3D_SensitiveFace::Matches(Standard_Real XMin, Standard_Real YMin, Standard_Real XMax, Standard_Real YMax, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveFace*)nativeHandle))->Matches(XMin, YMin, XMax, YMax, aTol));
}

 System::Boolean OCSelect3D_SensitiveFace::Matches(OCNaroWrappers::OCTColgp_Array1OfPnt2d^ Polyline, OCNaroWrappers::OCBnd_Box2d^ aBox, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select3D_SensitiveFace*)nativeHandle))->Matches(*((TColgp_Array1OfPnt2d*)Polyline->Handle), *((Bnd_Box2d*)aBox->Handle), aTol));
}

 Standard_Real OCSelect3D_SensitiveFace::ComputeDepth(OCNaroWrappers::OCgp_Lin^ EyeLine)
{
  return (*((Handle_Select3D_SensitiveFace*)nativeHandle))->ComputeDepth(*((gp_Lin*)EyeLine->Handle));
}

 void OCSelect3D_SensitiveFace::Dump(Standard_OStream& S, System::Boolean FullDump)
{
  (*((Handle_Select3D_SensitiveFace*)nativeHandle))->Dump(S, OCConverter::BooleanToStandardBoolean(FullDump));
}

OCSelect3D_SensitiveEntity^ OCSelect3D_SensitiveFace::GetConnected(OCNaroWrappers::OCTopLoc_Location^ theLocation)
{
  Handle(Select3D_SensitiveEntity) tmp = (*((Handle_Select3D_SensitiveFace*)nativeHandle))->GetConnected(*((TopLoc_Location*)theLocation->Handle));
  return gcnew OCSelect3D_SensitiveEntity(&tmp);
}

