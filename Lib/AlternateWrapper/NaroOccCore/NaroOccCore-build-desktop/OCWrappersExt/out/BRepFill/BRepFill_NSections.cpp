// File generated by CPPExt (CPP file)
//

#include "BRepFill_NSections.h"
#include "../Converter.h"
#include "../TopTools/TopTools_HArray2OfShape.h"
#include "../Geom/Geom_BSplineSurface.h"
#include "../TopTools/TopTools_SequenceOfShape.h"
#include "../GeomFill/GeomFill_SequenceOfTrsf.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../GeomFill/GeomFill_SectionLaw.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBRepFill_NSections::OCBRepFill_NSections(Handle(BRepFill_NSections)* nativeHandle) : OCBRepFill_SectionLaw((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepFill_NSections(*nativeHandle);
}

OCBRepFill_NSections::OCBRepFill_NSections(OCNaroWrappers::OCTopTools_SequenceOfShape^ S, System::Boolean Build) : OCBRepFill_SectionLaw((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepFill_NSections(new BRepFill_NSections(*((TopTools_SequenceOfShape*)S->Handle), OCConverter::BooleanToStandardBoolean(Build)));
}

OCBRepFill_NSections::OCBRepFill_NSections(OCNaroWrappers::OCTopTools_SequenceOfShape^ S, OCNaroWrappers::OCGeomFill_SequenceOfTrsf^ Trsfs, OCNaroWrappers::OCTColStd_SequenceOfReal^ P, Standard_Real VF, Standard_Real VL, System::Boolean Build) : OCBRepFill_SectionLaw((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepFill_NSections(new BRepFill_NSections(*((TopTools_SequenceOfShape*)S->Handle), *((GeomFill_SequenceOfTrsf*)Trsfs->Handle), *((TColStd_SequenceOfReal*)P->Handle), VF, VL, OCConverter::BooleanToStandardBoolean(Build)));
}

 System::Boolean OCBRepFill_NSections::IsVertex()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepFill_NSections*)nativeHandle))->IsVertex());
}

 System::Boolean OCBRepFill_NSections::IsConstant()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_BRepFill_NSections*)nativeHandle))->IsConstant());
}

OCGeomFill_SectionLaw^ OCBRepFill_NSections::ConcatenedLaw()
{
  Handle(GeomFill_SectionLaw) tmp = (*((Handle_BRepFill_NSections*)nativeHandle))->ConcatenedLaw();
  return gcnew OCGeomFill_SectionLaw(&tmp);
}

 OCGeomAbs_Shape OCBRepFill_NSections::Continuity(Standard_Integer Index, Standard_Real TolAngular)
{
  return (OCGeomAbs_Shape)((*((Handle_BRepFill_NSections*)nativeHandle))->Continuity(Index, TolAngular));
}

 Standard_Real OCBRepFill_NSections::VertexTol(Standard_Integer Index, Standard_Real Param)
{
  return (*((Handle_BRepFill_NSections*)nativeHandle))->VertexTol(Index, Param);
}

OCTopoDS_Vertex^ OCBRepFill_NSections::Vertex(Standard_Integer Index, Standard_Real Param)
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = (*((Handle_BRepFill_NSections*)nativeHandle))->Vertex(Index, Param);
  return gcnew OCTopoDS_Vertex(tmp);
}

 void OCBRepFill_NSections::D0(Standard_Real Param, OCNaroWrappers::OCTopoDS_Shape^ S)
{
  (*((Handle_BRepFill_NSections*)nativeHandle))->D0(Param, *((TopoDS_Shape*)S->Handle));
}

