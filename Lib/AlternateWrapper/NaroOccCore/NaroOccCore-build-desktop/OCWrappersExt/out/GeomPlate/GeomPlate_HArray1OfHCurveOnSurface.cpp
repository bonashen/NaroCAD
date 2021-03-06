// File generated by CPPExt (CPP file)
//

#include "GeomPlate_HArray1OfHCurveOnSurface.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HCurveOnSurface.h"
#include "GeomPlate_Array1OfHCurveOnSurface.h"


using namespace OCNaroWrappers;

OCGeomPlate_HArray1OfHCurveOnSurface::OCGeomPlate_HArray1OfHCurveOnSurface(Handle(GeomPlate_HArray1OfHCurveOnSurface)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_GeomPlate_HArray1OfHCurveOnSurface(*nativeHandle);
}

OCGeomPlate_HArray1OfHCurveOnSurface::OCGeomPlate_HArray1OfHCurveOnSurface(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GeomPlate_HArray1OfHCurveOnSurface(new GeomPlate_HArray1OfHCurveOnSurface(Low, Up));
}

OCGeomPlate_HArray1OfHCurveOnSurface::OCGeomPlate_HArray1OfHCurveOnSurface(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCAdaptor3d_HCurveOnSurface^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_GeomPlate_HArray1OfHCurveOnSurface(new GeomPlate_HArray1OfHCurveOnSurface(Low, Up, *((Handle_Adaptor3d_HCurveOnSurface*)V->Handle)));
}

 void OCGeomPlate_HArray1OfHCurveOnSurface::Init(OCNaroWrappers::OCAdaptor3d_HCurveOnSurface^ V)
{
  (*((Handle_GeomPlate_HArray1OfHCurveOnSurface*)nativeHandle))->Init(*((Handle_Adaptor3d_HCurveOnSurface*)V->Handle));
}

 Standard_Integer OCGeomPlate_HArray1OfHCurveOnSurface::Length()
{
  return (*((Handle_GeomPlate_HArray1OfHCurveOnSurface*)nativeHandle))->Length();
}

 Standard_Integer OCGeomPlate_HArray1OfHCurveOnSurface::Lower()
{
  return (*((Handle_GeomPlate_HArray1OfHCurveOnSurface*)nativeHandle))->Lower();
}

 Standard_Integer OCGeomPlate_HArray1OfHCurveOnSurface::Upper()
{
  return (*((Handle_GeomPlate_HArray1OfHCurveOnSurface*)nativeHandle))->Upper();
}

 void OCGeomPlate_HArray1OfHCurveOnSurface::SetValue(Standard_Integer Index, OCNaroWrappers::OCAdaptor3d_HCurveOnSurface^ Value)
{
  (*((Handle_GeomPlate_HArray1OfHCurveOnSurface*)nativeHandle))->SetValue(Index, *((Handle_Adaptor3d_HCurveOnSurface*)Value->Handle));
}

OCAdaptor3d_HCurveOnSurface^ OCGeomPlate_HArray1OfHCurveOnSurface::Value(Standard_Integer Index)
{
  Handle(Adaptor3d_HCurveOnSurface) tmp = (*((Handle_GeomPlate_HArray1OfHCurveOnSurface*)nativeHandle))->Value(Index);
  return gcnew OCAdaptor3d_HCurveOnSurface(&tmp);
}

OCAdaptor3d_HCurveOnSurface^ OCGeomPlate_HArray1OfHCurveOnSurface::ChangeValue(Standard_Integer Index)
{
  Handle(Adaptor3d_HCurveOnSurface) tmp = (*((Handle_GeomPlate_HArray1OfHCurveOnSurface*)nativeHandle))->ChangeValue(Index);
  return gcnew OCAdaptor3d_HCurveOnSurface(&tmp);
}

OCGeomPlate_Array1OfHCurveOnSurface^ OCGeomPlate_HArray1OfHCurveOnSurface::Array1()
{
  GeomPlate_Array1OfHCurveOnSurface* tmp = new GeomPlate_Array1OfHCurveOnSurface(0, 0);
  *tmp = (*((Handle_GeomPlate_HArray1OfHCurveOnSurface*)nativeHandle))->Array1();
  return gcnew OCGeomPlate_Array1OfHCurveOnSurface(tmp);
}

OCGeomPlate_Array1OfHCurveOnSurface^ OCGeomPlate_HArray1OfHCurveOnSurface::ChangeArray1()
{
  GeomPlate_Array1OfHCurveOnSurface* tmp = new GeomPlate_Array1OfHCurveOnSurface(0, 0);
  *tmp = (*((Handle_GeomPlate_HArray1OfHCurveOnSurface*)nativeHandle))->ChangeArray1();
  return gcnew OCGeomPlate_Array1OfHCurveOnSurface(tmp);
}


