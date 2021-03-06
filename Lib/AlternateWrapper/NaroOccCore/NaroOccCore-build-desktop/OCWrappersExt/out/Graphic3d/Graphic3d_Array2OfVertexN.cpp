// File generated by CPPExt (CPP file)
//

#include "Graphic3d_Array2OfVertexN.h"
#include "../Converter.h"
#include "Graphic3d_VertexN.h"


using namespace OCNaroWrappers;

OCGraphic3d_Array2OfVertexN::OCGraphic3d_Array2OfVertexN(Graphic3d_Array2OfVertexN* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGraphic3d_Array2OfVertexN::OCGraphic3d_Array2OfVertexN(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new Graphic3d_Array2OfVertexN(R1, R2, C1, C2);
}

OCGraphic3d_Array2OfVertexN::OCGraphic3d_Array2OfVertexN(OCNaroWrappers::OCGraphic3d_VertexN^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new Graphic3d_Array2OfVertexN(*((Graphic3d_VertexN*)Item->Handle), R1, R2, C1, C2);
}

 void OCGraphic3d_Array2OfVertexN::Init(OCNaroWrappers::OCGraphic3d_VertexN^ V)
{
  ((Graphic3d_Array2OfVertexN*)nativeHandle)->Init(*((Graphic3d_VertexN*)V->Handle));
}

OCGraphic3d_Array2OfVertexN^ OCGraphic3d_Array2OfVertexN::Assign(OCNaroWrappers::OCGraphic3d_Array2OfVertexN^ Other)
{
  Graphic3d_Array2OfVertexN* tmp = new Graphic3d_Array2OfVertexN(0, 0, 0, 0);
  *tmp = ((Graphic3d_Array2OfVertexN*)nativeHandle)->Assign(*((Graphic3d_Array2OfVertexN*)Other->Handle));
  return gcnew OCGraphic3d_Array2OfVertexN(tmp);
}

 Standard_Integer OCGraphic3d_Array2OfVertexN::ColLength()
{
  return ((Graphic3d_Array2OfVertexN*)nativeHandle)->ColLength();
}

 Standard_Integer OCGraphic3d_Array2OfVertexN::RowLength()
{
  return ((Graphic3d_Array2OfVertexN*)nativeHandle)->RowLength();
}

 Standard_Integer OCGraphic3d_Array2OfVertexN::LowerCol()
{
  return ((Graphic3d_Array2OfVertexN*)nativeHandle)->LowerCol();
}

 Standard_Integer OCGraphic3d_Array2OfVertexN::LowerRow()
{
  return ((Graphic3d_Array2OfVertexN*)nativeHandle)->LowerRow();
}

 Standard_Integer OCGraphic3d_Array2OfVertexN::UpperCol()
{
  return ((Graphic3d_Array2OfVertexN*)nativeHandle)->UpperCol();
}

 Standard_Integer OCGraphic3d_Array2OfVertexN::UpperRow()
{
  return ((Graphic3d_Array2OfVertexN*)nativeHandle)->UpperRow();
}

 void OCGraphic3d_Array2OfVertexN::SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCGraphic3d_VertexN^ Value)
{
  ((Graphic3d_Array2OfVertexN*)nativeHandle)->SetValue(Row, Col, *((Graphic3d_VertexN*)Value->Handle));
}

OCGraphic3d_VertexN^ OCGraphic3d_Array2OfVertexN::Value(Standard_Integer Row, Standard_Integer Col)
{
  Graphic3d_VertexN* tmp = new Graphic3d_VertexN();
  *tmp = ((Graphic3d_Array2OfVertexN*)nativeHandle)->Value(Row, Col);
  return gcnew OCGraphic3d_VertexN(tmp);
}

OCGraphic3d_VertexN^ OCGraphic3d_Array2OfVertexN::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  Graphic3d_VertexN* tmp = new Graphic3d_VertexN();
  *tmp = ((Graphic3d_Array2OfVertexN*)nativeHandle)->ChangeValue(Row, Col);
  return gcnew OCGraphic3d_VertexN(tmp);
}


