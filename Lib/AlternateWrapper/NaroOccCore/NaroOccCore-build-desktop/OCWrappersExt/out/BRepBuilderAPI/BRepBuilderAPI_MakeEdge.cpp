// File generated by CPPExt (CPP file)
//

#include "BRepBuilderAPI_MakeEdge.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Lin.h"
#include "../gp/gp_Circ.h"
#include "../gp/gp_Elips.h"
#include "../gp/gp_Hypr.h"
#include "../gp/gp_Parab.h"
#include "../Geom/Geom_Curve.h"
#include "../Geom2d/Geom2d_Curve.h"
#include "../Geom/Geom_Surface.h"
#include "../TopoDS/TopoDS_Edge.h"


using namespace OCNaroWrappers;

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(BRepBuilderAPI_MakeEdge* nativeHandle) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge() : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge();
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Lin^ L) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Lin*)L->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Lin^ L, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Lin*)L->Handle), p1, p2);
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Lin^ L, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Lin*)L->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Lin^ L, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Lin*)L->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Circ^ L) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Circ*)L->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Circ^ L, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Circ*)L->Handle), p1, p2);
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Circ^ L, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Circ*)L->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Circ^ L, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Circ*)L->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Elips^ L) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Elips*)L->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Elips^ L, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Elips*)L->Handle), p1, p2);
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Elips^ L, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Elips*)L->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Elips^ L, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Elips*)L->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Hypr^ L) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Hypr*)L->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Hypr^ L, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Hypr*)L->Handle), p1, p2);
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Hypr^ L, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Hypr*)L->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Hypr^ L, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Hypr*)L->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Parab^ L) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Parab*)L->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Parab^ L, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Parab*)L->Handle), p1, p2);
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Parab^ L, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Parab*)L->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCgp_Parab^ L, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((gp_Parab*)L->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom_Curve^ L) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom_Curve*)L->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom_Curve^ L, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom_Curve*)L->Handle), p1, p2);
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom_Curve^ L, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom_Curve*)L->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom_Curve^ L, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom_Curve*)L->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom_Curve^ L, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom_Curve*)L->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle), p1, p2);
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom_Curve^ L, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom_Curve*)L->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle), p1, p2);
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom2d_Curve^ L, OCNaroWrappers::OCGeom_Surface^ S) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom2d_Curve*)L->Handle), *((Handle_Geom_Surface*)S->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom2d_Curve^ L, OCNaroWrappers::OCGeom_Surface^ S, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom2d_Curve*)L->Handle), *((Handle_Geom_Surface*)S->Handle), p1, p2);
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom2d_Curve^ L, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom2d_Curve*)L->Handle), *((Handle_Geom_Surface*)S->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom2d_Curve^ L, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom2d_Curve*)L->Handle), *((Handle_Geom_Surface*)S->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom2d_Curve^ L, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom2d_Curve*)L->Handle), *((Handle_Geom_Surface*)S->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle), p1, p2);
}

OCBRepBuilderAPI_MakeEdge::OCBRepBuilderAPI_MakeEdge(OCNaroWrappers::OCGeom2d_Curve^ L, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2, Standard_Real p1, Standard_Real p2) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr)

{
  nativeHandle = new BRepBuilderAPI_MakeEdge(*((Handle_Geom2d_Curve*)L->Handle), *((Handle_Geom_Surface*)S->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle), p1, p2);
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom_Curve^ C)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom_Curve*)C->Handle));
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom_Curve^ C, Standard_Real p1, Standard_Real p2)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom_Curve*)C->Handle), p1, p2);
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom_Curve^ C, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom_Curve*)C->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom_Curve^ C, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom_Curve*)C->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom_Curve^ C, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, Standard_Real p1, Standard_Real p2)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom_Curve*)C->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle), p1, p2);
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom_Curve^ C, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2, Standard_Real p1, Standard_Real p2)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom_Curve*)C->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle), p1, p2);
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCGeom_Surface^ S)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom2d_Curve*)C->Handle), *((Handle_Geom_Surface*)S->Handle));
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCGeom_Surface^ S, Standard_Real p1, Standard_Real p2)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom2d_Curve*)C->Handle), *((Handle_Geom_Surface*)S->Handle), p1, p2);
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom2d_Curve*)C->Handle), *((Handle_Geom_Surface*)S->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom2d_Curve*)C->Handle), *((Handle_Geom_Surface*)S->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2, Standard_Real p1, Standard_Real p2)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom2d_Curve*)C->Handle), *((Handle_Geom_Surface*)S->Handle), *((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle), p1, p2);
}

 void OCBRepBuilderAPI_MakeEdge::Init(OCNaroWrappers::OCGeom2d_Curve^ C, OCNaroWrappers::OCGeom_Surface^ S, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2, Standard_Real p1, Standard_Real p2)
{
  ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Init(*((Handle_Geom2d_Curve*)C->Handle), *((Handle_Geom_Surface*)S->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle), p1, p2);
}

 System::Boolean OCBRepBuilderAPI_MakeEdge::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((BRepBuilderAPI_MakeEdge*)nativeHandle)->IsDone());
}

 OCBRepBuilderAPI_EdgeError OCBRepBuilderAPI_MakeEdge::Error()
{
  return (OCBRepBuilderAPI_EdgeError)(((BRepBuilderAPI_MakeEdge*)nativeHandle)->Error());
}

OCTopoDS_Edge^ OCBRepBuilderAPI_MakeEdge::Edge()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Edge();
  return gcnew OCTopoDS_Edge(tmp);
}

OCTopoDS_Vertex^ OCBRepBuilderAPI_MakeEdge::Vertex1()
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Vertex1();
  return gcnew OCTopoDS_Vertex(tmp);
}

OCTopoDS_Vertex^ OCBRepBuilderAPI_MakeEdge::Vertex2()
{
  TopoDS_Vertex* tmp = new TopoDS_Vertex();
  *tmp = ((BRepBuilderAPI_MakeEdge*)nativeHandle)->Vertex2();
  return gcnew OCTopoDS_Vertex(tmp);
}


