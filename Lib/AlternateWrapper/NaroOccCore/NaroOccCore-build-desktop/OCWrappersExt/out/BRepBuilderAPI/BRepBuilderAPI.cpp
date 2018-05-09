// File generated by CPPExt (CPP file)
//

#include "BRepBuilderAPI.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



 void OCBRepBuilderAPI::Plane(OCNaroWrappers::OCGeom_Plane^ P)
{
  BRepBuilderAPI::Plane(*((Handle_Geom_Plane*)P->Handle));
}

OCGeom_Plane^ OCBRepBuilderAPI::Plane()
{
  Handle(Geom_Plane) tmp = BRepBuilderAPI::Plane();
  return gcnew OCGeom_Plane(&tmp);
}

 void OCBRepBuilderAPI::Precision(Standard_Real P)
{
  BRepBuilderAPI::Precision(P);
}

 Standard_Real OCBRepBuilderAPI::Precision()
{
  return BRepBuilderAPI::Precision();
}

