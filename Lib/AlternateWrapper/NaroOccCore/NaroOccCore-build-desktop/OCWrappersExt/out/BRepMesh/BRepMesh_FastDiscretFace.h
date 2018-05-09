// File generated by CPPExt (Transient)
//
#ifndef _BRepMesh_FastDiscretFace_OCWrappers_HeaderFile
#define _BRepMesh_FastDiscretFace_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepMesh_FastDiscretFace.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "BRepMesh_DataMapOfVertexInteger.h"
#include "BRepMesh_DataMapOfShapePairOfPolygon.h"
#include "BRepMesh_DataMapOfIntegerPnt.h"
#include "BRepMesh_ListOfVertex.h"
#include "../TColStd/TColStd_IndexedMapOfInteger.h"
#include "BRepMesh_DataMapOfIntegerListOfXY.h"
#include "../TColStd/TColStd_IndexedMapOfReal.h"


namespace OCNaroWrappers
{

ref class OCBRepMesh_DataStructureOfDelaun;
ref class OCBRepMesh_FaceAttribute;
ref class OCTopoDS_Face;
ref class OCTopTools_DataMapOfShapeReal;
ref class OCTopoDS_Vertex;
ref class OCBRepAdaptor_HSurface;
ref class OCTopoDS_Edge;
ref class OCPoly_Triangulation;
ref class OCTopLoc_Location;
ref class OCBRepMesh_ListOfVertex;
ref class OCTColStd_ListOfInteger;
ref class OCBRepMesh_Delaun;
ref class OCgp_XY;
ref class OCgp_Pnt2d;
ref class OCBRepMesh_DataMapOfIntegerListOfXY;
ref class OCBRepMesh_Triangle;
ref class OCBRepMesh_Edge;
ref class OCBRepMesh_Vertex;
ref class OCgp_Pnt;


//! Algorithm  to mesh  a face  with  respect of  the <br>
//!          frontier the deflection  and by option the  shared <br>
//!          components. <br>
public ref class OCBRepMesh_FastDiscretFace : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCBRepMesh_FastDiscretFace(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_FastDiscretFace(Handle(BRepMesh_FastDiscretFace)* nativeHandle);

// Methods PUBLIC


OCBRepMesh_FastDiscretFace(Standard_Real theAngle, System::Boolean theWithShare);


 /*instead*/  void Add(OCNaroWrappers::OCTopoDS_Face^ theFace, OCNaroWrappers::OCBRepMesh_FaceAttribute^ theAttrib, OCNaroWrappers::OCTopTools_DataMapOfShapeReal^ theMapDefle, TopTools_MutexForShapeProvider theMutexProvider) ;


 /*instead*/  Standard_Real Control(OCNaroWrappers::OCBRepAdaptor_HSurface^ theCaro, Standard_Real theDefFace, OCNaroWrappers::OCBRepMesh_ListOfVertex^ theInternalV, OCNaroWrappers::OCTColStd_ListOfInteger^ theBadTriangles, OCNaroWrappers::OCTColStd_ListOfInteger^ theNulTriangles, OCNaroWrappers::OCBRepMesh_Delaun^ theTrigu, System::Boolean theIsFirst) ;


static /*instead*/  OCgp_XY^ FindUV(OCNaroWrappers::OCTopoDS_Vertex^ theV, OCNaroWrappers::OCgp_Pnt2d^ theXY, Standard_Integer theIp, OCNaroWrappers::OCBRepAdaptor_HSurface^ theSFace, Standard_Real theMinDist, OCNaroWrappers::OCBRepMesh_DataMapOfIntegerListOfXY^ theLocation2dMap) ;

//! Gives the triangle of <Index>. <br>
 /*instead*/  OCBRepMesh_Triangle^ Triangle(Standard_Integer theIndex) ;

//! Gives the edge of index <Index>. <br>
 /*instead*/  OCBRepMesh_Edge^ Edge(Standard_Integer theIndex) ;

//! Gives the vertex of <Index>. <br>
 /*instead*/  OCBRepMesh_Vertex^ Vertex(Standard_Integer theIndex) ;

//! Gives the location3d of the vertex of <Index>. <br>
 /*instead*/  OCgp_Pnt^ Pnt(Standard_Integer theIndex) ;

~OCBRepMesh_FastDiscretFace()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif