// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_HArray1OfMaterialPropertyRepresentation_OCWrappers_HeaderFile
#define _StepRepr_HArray1OfMaterialPropertyRepresentation_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_HArray1OfMaterialPropertyRepresentation.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepRepr_Array1OfMaterialPropertyRepresentation.h"


namespace OCNaroWrappers
{

ref class OCStepRepr_MaterialPropertyRepresentation;
ref class OCStepRepr_Array1OfMaterialPropertyRepresentation;



public ref class OCStepRepr_HArray1OfMaterialPropertyRepresentation : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepRepr_HArray1OfMaterialPropertyRepresentation(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_HArray1OfMaterialPropertyRepresentation(Handle(StepRepr_HArray1OfMaterialPropertyRepresentation)* nativeHandle);

// Methods PUBLIC


OCStepRepr_HArray1OfMaterialPropertyRepresentation(Standard_Integer Low, Standard_Integer Up);


OCStepRepr_HArray1OfMaterialPropertyRepresentation(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepRepr_MaterialPropertyRepresentation^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepRepr_MaterialPropertyRepresentation^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepRepr_MaterialPropertyRepresentation^ Value) ;


 /*instead*/  OCStepRepr_MaterialPropertyRepresentation^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepRepr_MaterialPropertyRepresentation^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepRepr_Array1OfMaterialPropertyRepresentation^ Array1() ;


 /*instead*/  OCStepRepr_Array1OfMaterialPropertyRepresentation^ ChangeArray1() ;

~OCStepRepr_HArray1OfMaterialPropertyRepresentation()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif