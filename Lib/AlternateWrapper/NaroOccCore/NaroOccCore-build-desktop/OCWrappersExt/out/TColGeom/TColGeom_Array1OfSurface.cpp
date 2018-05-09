// File generated by CPPExt (CPP file)
//

#include "TColGeom_Array1OfSurface.h"
#include "../Converter.h"
#include "../Geom/Geom_Surface.h"


using namespace OCNaroWrappers;

OCTColGeom_Array1OfSurface::OCTColGeom_Array1OfSurface(TColGeom_Array1OfSurface* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColGeom_Array1OfSurface::OCTColGeom_Array1OfSurface(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom_Array1OfSurface(Low, Up);
}

OCTColGeom_Array1OfSurface::OCTColGeom_Array1OfSurface(OCNaroWrappers::OCGeom_Surface^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom_Array1OfSurface(*((Handle_Geom_Surface*)Item->Handle), Low, Up);
}

 void OCTColGeom_Array1OfSurface::Init(OCNaroWrappers::OCGeom_Surface^ V)
{
  ((TColGeom_Array1OfSurface*)nativeHandle)->Init(*((Handle_Geom_Surface*)V->Handle));
}

 System::Boolean OCTColGeom_Array1OfSurface::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TColGeom_Array1OfSurface*)nativeHandle)->IsAllocated());
}

OCTColGeom_Array1OfSurface^ OCTColGeom_Array1OfSurface::Assign(OCNaroWrappers::OCTColGeom_Array1OfSurface^ Other)
{
  TColGeom_Array1OfSurface* tmp = new TColGeom_Array1OfSurface(0, 0);
  *tmp = ((TColGeom_Array1OfSurface*)nativeHandle)->Assign(*((TColGeom_Array1OfSurface*)Other->Handle));
  return gcnew OCTColGeom_Array1OfSurface(tmp);
}

 Standard_Integer OCTColGeom_Array1OfSurface::Length()
{
  return ((TColGeom_Array1OfSurface*)nativeHandle)->Length();
}

 Standard_Integer OCTColGeom_Array1OfSurface::Lower()
{
  return ((TColGeom_Array1OfSurface*)nativeHandle)->Lower();
}

 Standard_Integer OCTColGeom_Array1OfSurface::Upper()
{
  return ((TColGeom_Array1OfSurface*)nativeHandle)->Upper();
}

 void OCTColGeom_Array1OfSurface::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom_Surface^ Value)
{
  ((TColGeom_Array1OfSurface*)nativeHandle)->SetValue(Index, *((Handle_Geom_Surface*)Value->Handle));
}

OCGeom_Surface^ OCTColGeom_Array1OfSurface::Value(Standard_Integer Index)
{
  Handle(Geom_Surface) tmp = ((TColGeom_Array1OfSurface*)nativeHandle)->Value(Index);
  return gcnew OCGeom_Surface(&tmp);
}

OCGeom_Surface^ OCTColGeom_Array1OfSurface::ChangeValue(Standard_Integer Index)
{
  Handle(Geom_Surface) tmp = ((TColGeom_Array1OfSurface*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGeom_Surface(&tmp);
}

