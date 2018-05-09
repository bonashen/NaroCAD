// File generated by CPPExt (CPP file)
//

#include "Graphic3d_AspectLine3d.h"
#include "../Converter.h"
#include "../Quantity/Quantity_Color.h"


using namespace OCNaroWrappers;

OCGraphic3d_AspectLine3d::OCGraphic3d_AspectLine3d(Handle(Graphic3d_AspectLine3d)* nativeHandle) : OCAspect_AspectLine((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic3d_AspectLine3d(*nativeHandle);
}

OCGraphic3d_AspectLine3d::OCGraphic3d_AspectLine3d() : OCAspect_AspectLine((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic3d_AspectLine3d(new Graphic3d_AspectLine3d());
}

OCGraphic3d_AspectLine3d::OCGraphic3d_AspectLine3d(OCNaroWrappers::OCQuantity_Color^ AColor, OCAspect_TypeOfLine AType, Standard_Real AWidth) : OCAspect_AspectLine((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic3d_AspectLine3d(new Graphic3d_AspectLine3d(*((Quantity_Color*)AColor->Handle), (Aspect_TypeOfLine)AType, AWidth));
}

