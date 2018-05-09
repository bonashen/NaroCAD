// File generated by CPPExt (CPP file)
//

#include "BRepTools_Modification.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../Geom/Geom_Surface.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../Geom/Geom_Curve.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../gp/gp_Pnt.h"
#include "../Geom2d/Geom2d_Curve.h"


using namespace OCNaroWrappers;

OCBRepTools_Modification::OCBRepTools_Modification(Handle(BRepTools_Modification)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepTools_Modification(*nativeHandle);
}

