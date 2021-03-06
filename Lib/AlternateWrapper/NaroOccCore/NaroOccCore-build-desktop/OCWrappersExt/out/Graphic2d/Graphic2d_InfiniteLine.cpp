// File generated by CPPExt (CPP file)
//

#include "Graphic2d_InfiniteLine.h"
#include "../Converter.h"
#include "Graphic2d_GraphicObject.h"
#include "Graphic2d_Drawer.h"


using namespace OCNaroWrappers;

OCGraphic2d_InfiniteLine::OCGraphic2d_InfiniteLine(Handle(Graphic2d_InfiniteLine)* nativeHandle) : OCGraphic2d_Line((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic2d_InfiniteLine(*nativeHandle);
}

OCGraphic2d_InfiniteLine::OCGraphic2d_InfiniteLine(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Quantity_Length X, Quantity_Length Y, Quantity_Length DX, Quantity_Length DY) : OCGraphic2d_Line((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic2d_InfiniteLine(new Graphic2d_InfiniteLine(*((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle), X, Y, DX, DY));
}

 void OCGraphic2d_InfiniteLine::Reference(Quantity_Length& X, Quantity_Length& Y)
{
  (*((Handle_Graphic2d_InfiniteLine*)nativeHandle))->Reference(X, Y);
}

 void OCGraphic2d_InfiniteLine::Slope(Quantity_Length& dX, Quantity_Length& dY)
{
  (*((Handle_Graphic2d_InfiniteLine*)nativeHandle))->Slope(dX, dY);
}

 void OCGraphic2d_InfiniteLine::Save(Aspect_FStream& aFStream)
{
  (*((Handle_Graphic2d_InfiniteLine*)nativeHandle))->Save(aFStream);
}

 void OCGraphic2d_InfiniteLine::Retrieve(Aspect_IFStream& anIFStream, OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject)
{
  Graphic2d_InfiniteLine::Retrieve(anIFStream, *((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle));
}


