// File generated by CPPExt (CPP file)
//

#include "PDF_VArrayTNodeOfFieldOfHAttributeArray1.h"
#include "../Converter.h"
#include "PDF_Attribute.h"
#include "PDF_FieldOfHAttributeArray1.h"
#include "PDF_VArrayNodeOfFieldOfHAttributeArray1.h"


using namespace OCNaroWrappers;

OCPDF_VArrayTNodeOfFieldOfHAttributeArray1::OCPDF_VArrayTNodeOfFieldOfHAttributeArray1(PDF_VArrayTNodeOfFieldOfHAttributeArray1* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCPDF_VArrayTNodeOfFieldOfHAttributeArray1::OCPDF_VArrayTNodeOfFieldOfHAttributeArray1() 
{
  nativeHandle = new PDF_VArrayTNodeOfFieldOfHAttributeArray1();
}

OCPDF_VArrayTNodeOfFieldOfHAttributeArray1::OCPDF_VArrayTNodeOfFieldOfHAttributeArray1(OCNaroWrappers::OCPDF_Attribute^ aValue) 
{
  nativeHandle = new PDF_VArrayTNodeOfFieldOfHAttributeArray1(*((Handle_PDF_Attribute*)aValue->Handle));
}

 void OCPDF_VArrayTNodeOfFieldOfHAttributeArray1::SetValue(OCNaroWrappers::OCPDF_Attribute^ aValue)
{
  ((PDF_VArrayTNodeOfFieldOfHAttributeArray1*)nativeHandle)->SetValue(*((Handle_PDF_Attribute*)aValue->Handle));
}

 Standard_Address OCPDF_VArrayTNodeOfFieldOfHAttributeArray1::Value()
{
  return ((PDF_VArrayTNodeOfFieldOfHAttributeArray1*)nativeHandle)->Value();
}

