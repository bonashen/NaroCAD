// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_Array2OfVertexNT_OCWrappers_HeaderFile
#define _Graphic3d_Array2OfVertexNT_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_Array2OfVertexNT.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGraphic3d_VertexNT;



public ref class OCGraphic3d_Array2OfVertexNT  {

protected:
  Graphic3d_Array2OfVertexNT* nativeHandle;
  OCGraphic3d_Array2OfVertexNT(OCDummy^) {};

public:
  property Graphic3d_Array2OfVertexNT* Handle
  {
    Graphic3d_Array2OfVertexNT* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGraphic3d_Array2OfVertexNT(Graphic3d_Array2OfVertexNT* nativeHandle);

// Methods PUBLIC


OCGraphic3d_Array2OfVertexNT(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCGraphic3d_Array2OfVertexNT(OCNaroWrappers::OCGraphic3d_VertexNT^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


 /*instead*/  void Init(OCNaroWrappers::OCGraphic3d_VertexNT^ V) ;


 /*instead*/  OCGraphic3d_Array2OfVertexNT^ Assign(OCNaroWrappers::OCGraphic3d_Array2OfVertexNT^ Other) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCGraphic3d_VertexNT^ Value) ;


 /*instead*/  OCGraphic3d_VertexNT^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCGraphic3d_VertexNT^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;

~OCGraphic3d_Array2OfVertexNT()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif