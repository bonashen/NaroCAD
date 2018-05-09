// File generated by CPPExt (CPP file)
//

#include "Image_PlanarPixelInterpolation.h"
#include "../Converter.h"
#include "Image_Image.h"
#include "../Aspect/Aspect_Pixel.h"
#include "Image_DColorImage.h"
#include "../Aspect/Aspect_ColorPixel.h"
#include "Image_DIndexedImage.h"
#include "../Aspect/Aspect_IndexPixel.h"


using namespace OCNaroWrappers;

OCImage_PlanarPixelInterpolation::OCImage_PlanarPixelInterpolation(Image_PlanarPixelInterpolation* nativeHandle) : OCImage_PixelInterpolation((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCImage_PlanarPixelInterpolation::OCImage_PlanarPixelInterpolation() : OCImage_PixelInterpolation((OCDummy^)nullptr)

{
  nativeHandle = new Image_PlanarPixelInterpolation();
}

 System::Boolean OCImage_PlanarPixelInterpolation::Interpolate(OCNaroWrappers::OCImage_Image^ aImage, Standard_Real X, Standard_Real Y, Standard_Integer LowerX, Standard_Integer LowerY, Standard_Integer UpperX, Standard_Integer UpperY, OCNaroWrappers::OCAspect_Pixel^ RetPixel)
{
  return OCConverter::StandardBooleanToBoolean(((Image_PlanarPixelInterpolation*)nativeHandle)->Interpolate(*((Handle_Image_Image*)aImage->Handle), X, Y, LowerX, LowerY, UpperX, UpperY, *((Aspect_Pixel*)RetPixel->Handle)));
}

 System::Boolean OCImage_PlanarPixelInterpolation::Interpolate(OCNaroWrappers::OCImage_DColorImage^ aImage, Standard_Real X, Standard_Real Y, Standard_Integer LowerX, Standard_Integer LowerY, Standard_Integer UpperX, Standard_Integer UpperY, OCNaroWrappers::OCAspect_ColorPixel^ RetPixel)
{
  return OCConverter::StandardBooleanToBoolean(((Image_PlanarPixelInterpolation*)nativeHandle)->Interpolate(*((Handle_Image_DColorImage*)aImage->Handle), X, Y, LowerX, LowerY, UpperX, UpperY, *((Aspect_ColorPixel*)RetPixel->Handle)));
}

 System::Boolean OCImage_PlanarPixelInterpolation::Interpolate(OCNaroWrappers::OCImage_DIndexedImage^ aImage, Standard_Real X, Standard_Real Y, Standard_Integer LowerX, Standard_Integer LowerY, Standard_Integer UpperX, Standard_Integer UpperY, OCNaroWrappers::OCAspect_IndexPixel^ RetPixel)
{
  return OCConverter::StandardBooleanToBoolean(((Image_PlanarPixelInterpolation*)nativeHandle)->Interpolate(*((Handle_Image_DIndexedImage*)aImage->Handle), X, Y, LowerX, LowerY, UpperX, UpperY, *((Aspect_IndexPixel*)RetPixel->Handle)));
}

