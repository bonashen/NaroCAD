// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_StructuralResponseProperty_OCWrappers_HeaderFile
#define _StepRepr_StructuralResponseProperty_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_StructuralResponseProperty.hxx>
#include "../Converter.h"

#include "StepRepr_PropertyDefinition.h"



namespace OCNaroWrappers
{



//! Representation of STEP entity StructuralResponseProperty <br>
public ref class OCStepRepr_StructuralResponseProperty : OCStepRepr_PropertyDefinition {

protected:
  // dummy constructor;
  OCStepRepr_StructuralResponseProperty(OCDummy^) : OCStepRepr_PropertyDefinition((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_StructuralResponseProperty(Handle(StepRepr_StructuralResponseProperty)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepRepr_StructuralResponseProperty();

~OCStepRepr_StructuralResponseProperty()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
