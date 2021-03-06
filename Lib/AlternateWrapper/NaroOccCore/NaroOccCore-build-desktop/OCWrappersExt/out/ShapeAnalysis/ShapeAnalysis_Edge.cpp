// File generated by CPPExt (CPP file)
//

#include "ShapeAnalysis_Edge.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../Geom/Geom_Curve.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../Geom/Geom_Surface.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../gp/gp_Pnt2d.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../gp/gp_Vec2d.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCShapeAnalysis_Edge::OCShapeAnalysis_Edge(ShapeAnalysis_Edge* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCShapeAnalysis_Edge::OCShapeAnalysis_Edge() 
{
  nativeHandle = new ShapeAnalysis_Edge();
}

 System::Boolean OCShapeAnalysis_Edge::HasCurve3d(OCNaroWrappers::OCTopoDS_Edge^ edge)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->HasCurve3d(*((TopoDS_Edge*)edge->Handle)));
}

 System::Boolean OCShapeAnalysis_Edge::Curve3d(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCGeom_Curve^ C3d, Standard_Real& cf, Standard_Real& cl, System::Boolean orient)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->Curve3d(*((TopoDS_Edge*)edge->Handle), *((Handle_Geom_Curve*)C3d->Handle), cf, cl, OCConverter::BooleanToStandardBoolean(orient)));
}

 System::Boolean OCShapeAnalysis_Edge::IsClosed3d(OCNaroWrappers::OCTopoDS_Edge^ edge)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->IsClosed3d(*((TopoDS_Edge*)edge->Handle)));
}

 System::Boolean OCShapeAnalysis_Edge::HasPCurve(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCTopoDS_Face^ face)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->HasPCurve(*((TopoDS_Edge*)edge->Handle), *((TopoDS_Face*)face->Handle)));
}

 System::Boolean OCShapeAnalysis_Edge::HasPCurve(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCGeom_Surface^ surface, OCNaroWrappers::OCTopLoc_Location^ location)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->HasPCurve(*((TopoDS_Edge*)edge->Handle), *((Handle_Geom_Surface*)surface->Handle), *((TopLoc_Location*)location->Handle)));
}

 System::Boolean OCShapeAnalysis_Edge::PCurve(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCTopoDS_Face^ face, OCNaroWrappers::OCGeom2d_Curve^ C2d, Standard_Real& cf, Standard_Real& cl, System::Boolean orient)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->PCurve(*((TopoDS_Edge*)edge->Handle), *((TopoDS_Face*)face->Handle), *((Handle_Geom2d_Curve*)C2d->Handle), cf, cl, OCConverter::BooleanToStandardBoolean(orient)));
}

 System::Boolean OCShapeAnalysis_Edge::PCurve(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCGeom_Surface^ surface, OCNaroWrappers::OCTopLoc_Location^ location, OCNaroWrappers::OCGeom2d_Curve^ C2d, Standard_Real& cf, Standard_Real& cl, System::Boolean orient)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->PCurve(*((TopoDS_Edge*)edge->Handle), *((Handle_Geom_Surface*)surface->Handle), *((TopLoc_Location*)location->Handle), *((Handle_Geom2d_Curve*)C2d->Handle), cf, cl, OCConverter::BooleanToStandardBoolean(orient)));
}

 System::Boolean OCShapeAnalysis_Edge::BoundUV(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCTopoDS_Face^ face, OCNaroWrappers::OCgp_Pnt2d^ first, OCNaroWrappers::OCgp_Pnt2d^ last)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->BoundUV(*((TopoDS_Edge*)edge->Handle), *((TopoDS_Face*)face->Handle), *((gp_Pnt2d*)first->Handle), *((gp_Pnt2d*)last->Handle)));
}

 System::Boolean OCShapeAnalysis_Edge::BoundUV(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCGeom_Surface^ surface, OCNaroWrappers::OCTopLoc_Location^ location, OCNaroWrappers::OCgp_Pnt2d^ first, OCNaroWrappers::OCgp_Pnt2d^ last)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->BoundUV(*((TopoDS_Edge*)edge->Handle), *((Handle_Geom_Surface*)surface->Handle), *((TopLoc_Location*)location->Handle), *((gp_Pnt2d*)first->Handle), *((gp_Pnt2d*)last->Handle)));
}

 System::Boolean OCShapeAnalysis_Edge::IsSeam(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCTopoDS_Face^ face)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->IsSeam(*((TopoDS_Edge*)edge->Handle), *((TopoDS_Face*)face->Handle)));
}

 System::Boolean OCShapeAnalysis_Edge::IsSeam(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCGeom_Surface^ surface, OCNaroWrappers::OCTopLoc_Location^ location)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->IsSeam(*((TopoDS_Edge*)edge->Handle), *((Handle_Geom_Surface*)surface->Handle), *((TopLoc_Location*)location->Handle)));
}

OCTopoDS_Vertex^ OCShapeAnalysis_Edge::FirstVertex(OCNaroWrappers::OCTopoDS_Edge^ edge)
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((ShapeAnalysis_Edge*)nativeHandle)->FirstVertex(*((TopoDS_Edge*)edge->Handle));
  return gcnew OCTopoDS_Vertex(tmp);
}

OCTopoDS_Vertex^ OCShapeAnalysis_Edge::LastVertex(OCNaroWrappers::OCTopoDS_Edge^ edge)
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((ShapeAnalysis_Edge*)nativeHandle)->LastVertex(*((TopoDS_Edge*)edge->Handle));
  return gcnew OCTopoDS_Vertex(tmp);
}

 System::Boolean OCShapeAnalysis_Edge::GetEndTangent2d(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCTopoDS_Face^ face, System::Boolean atEnd, OCNaroWrappers::OCgp_Pnt2d^ pos, OCNaroWrappers::OCgp_Vec2d^ tang, Standard_Real dparam)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->GetEndTangent2d(*((TopoDS_Edge*)edge->Handle), *((TopoDS_Face*)face->Handle), OCConverter::BooleanToStandardBoolean(atEnd), *((gp_Pnt2d*)pos->Handle), *((gp_Vec2d*)tang->Handle), dparam));
}

 System::Boolean OCShapeAnalysis_Edge::GetEndTangent2d(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCGeom_Surface^ surface, OCNaroWrappers::OCTopLoc_Location^ location, System::Boolean atEnd, OCNaroWrappers::OCgp_Pnt2d^ pos, OCNaroWrappers::OCgp_Vec2d^ tang, Standard_Real dparam)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->GetEndTangent2d(*((TopoDS_Edge*)edge->Handle), *((Handle_Geom_Surface*)surface->Handle), *((TopLoc_Location*)location->Handle), OCConverter::BooleanToStandardBoolean(atEnd), *((gp_Pnt2d*)pos->Handle), *((gp_Vec2d*)tang->Handle), dparam));
}

 System::Boolean OCShapeAnalysis_Edge::CheckVerticesWithCurve3d(OCNaroWrappers::OCTopoDS_Edge^ edge, Standard_Real preci, Standard_Integer vtx)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->CheckVerticesWithCurve3d(*((TopoDS_Edge*)edge->Handle), preci, vtx));
}

 System::Boolean OCShapeAnalysis_Edge::CheckVerticesWithPCurve(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCTopoDS_Face^ face, Standard_Real preci, Standard_Integer vtx)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->CheckVerticesWithPCurve(*((TopoDS_Edge*)edge->Handle), *((TopoDS_Face*)face->Handle), preci, vtx));
}

 System::Boolean OCShapeAnalysis_Edge::CheckVerticesWithPCurve(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCGeom_Surface^ surface, OCNaroWrappers::OCTopLoc_Location^ location, Standard_Real preci, Standard_Integer vtx)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->CheckVerticesWithPCurve(*((TopoDS_Edge*)edge->Handle), *((Handle_Geom_Surface*)surface->Handle), *((TopLoc_Location*)location->Handle), preci, vtx));
}

 System::Boolean OCShapeAnalysis_Edge::CheckVertexTolerance(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCTopoDS_Face^ face, Standard_Real& toler1, Standard_Real& toler2)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->CheckVertexTolerance(*((TopoDS_Edge*)edge->Handle), *((TopoDS_Face*)face->Handle), toler1, toler2));
}

 System::Boolean OCShapeAnalysis_Edge::CheckVertexTolerance(OCNaroWrappers::OCTopoDS_Edge^ edge, Standard_Real& toler1, Standard_Real& toler2)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->CheckVertexTolerance(*((TopoDS_Edge*)edge->Handle), toler1, toler2));
}

 System::Boolean OCShapeAnalysis_Edge::CheckCurve3dWithPCurve(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCTopoDS_Face^ face)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->CheckCurve3dWithPCurve(*((TopoDS_Edge*)edge->Handle), *((TopoDS_Face*)face->Handle)));
}

 System::Boolean OCShapeAnalysis_Edge::CheckCurve3dWithPCurve(OCNaroWrappers::OCTopoDS_Edge^ edge, OCNaroWrappers::OCGeom_Surface^ surface, OCNaroWrappers::OCTopLoc_Location^ location)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->CheckCurve3dWithPCurve(*((TopoDS_Edge*)edge->Handle), *((Handle_Geom_Surface*)surface->Handle), *((TopLoc_Location*)location->Handle)));
}

 System::Boolean OCShapeAnalysis_Edge::Status(OCShapeExtend_Status status)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->Status((ShapeExtend_Status)status));
}

 System::Boolean OCShapeAnalysis_Edge::CheckSameParameter(OCNaroWrappers::OCTopoDS_Edge^ edge, Standard_Real& maxdev, Standard_Integer NbControl)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->CheckSameParameter(*((TopoDS_Edge*)edge->Handle), maxdev, NbControl));
}

 System::Boolean OCShapeAnalysis_Edge::CheckOverlapping(OCNaroWrappers::OCTopoDS_Edge^ theEdge1, OCNaroWrappers::OCTopoDS_Edge^ theEdge2, Standard_Real& theTolOverlap, Standard_Real theDomainDist)
{
  return OCConverter::StandardBooleanToBoolean(((ShapeAnalysis_Edge*)nativeHandle)->CheckOverlapping(*((TopoDS_Edge*)theEdge1->Handle), *((TopoDS_Edge*)theEdge2->Handle), theTolOverlap, theDomainDist));
}


