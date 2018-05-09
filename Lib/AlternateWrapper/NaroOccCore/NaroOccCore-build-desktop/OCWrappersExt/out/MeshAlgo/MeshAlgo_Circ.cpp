// File generated by CPPExt (CPP file)
//

#include "MeshAlgo_Circ.h"
#include "../Converter.h"
#include "../gp/gp_XY.h"


using namespace OCNaroWrappers;

OCMeshAlgo_Circ::OCMeshAlgo_Circ(MeshAlgo_Circ* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMeshAlgo_Circ::OCMeshAlgo_Circ() 
{
  nativeHandle = new MeshAlgo_Circ();
}

OCMeshAlgo_Circ::OCMeshAlgo_Circ(OCNaroWrappers::OCgp_XY^ loc, Standard_Real rad) 
{
  nativeHandle = new MeshAlgo_Circ(*((gp_XY*)loc->Handle), rad);
}

 void OCMeshAlgo_Circ::SetLocation(OCNaroWrappers::OCgp_XY^ loc)
{
  ((MeshAlgo_Circ*)nativeHandle)->SetLocation(*((gp_XY*)loc->Handle));
}

 void OCMeshAlgo_Circ::SetRadius(Standard_Real rad)
{
  ((MeshAlgo_Circ*)nativeHandle)->SetRadius(rad);
}

OCgp_XY^ OCMeshAlgo_Circ::Location()
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((MeshAlgo_Circ*)nativeHandle)->Location();
  return gcnew OCgp_XY(tmp);
}

 Standard_Real OCMeshAlgo_Circ::Radius()
{
  return ((MeshAlgo_Circ*)nativeHandle)->Radius();
}

