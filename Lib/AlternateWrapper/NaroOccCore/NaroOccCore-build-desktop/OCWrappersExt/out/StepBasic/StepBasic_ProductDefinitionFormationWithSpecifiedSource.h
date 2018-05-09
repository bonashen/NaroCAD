// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_ProductDefinitionFormationWithSpecifiedSource_OCWrappers_HeaderFile
#define _StepBasic_ProductDefinitionFormationWithSpecifiedSource_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_ProductDefinitionFormationWithSpecifiedSource.hxx>
#include "../Converter.h"

#include "StepBasic_ProductDefinitionFormation.h"

#include "StepBasic_Source.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepBasic_Product;



public ref class OCStepBasic_ProductDefinitionFormationWithSpecifiedSource : OCStepBasic_ProductDefinitionFormation {

protected:
  // dummy constructor;
  OCStepBasic_ProductDefinitionFormationWithSpecifiedSource(OCDummy^) : OCStepBasic_ProductDefinitionFormation((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_ProductDefinitionFormationWithSpecifiedSource(Handle(StepBasic_ProductDefinitionFormationWithSpecifiedSource)* nativeHandle);

// Methods PUBLIC

//! Returns a ProductDefinitionFormationWithSpecifiedSource <br>
OCStepBasic_ProductDefinitionFormationWithSpecifiedSource();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aId, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepBasic_Product^ aOfProduct) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aId, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepBasic_Product^ aOfProduct, OCStepBasic_Source aMakeOrBuy) ;


 /*instead*/  void SetMakeOrBuy(OCStepBasic_Source aMakeOrBuy) ;


 /*instead*/  OCStepBasic_Source MakeOrBuy() ;

~OCStepBasic_ProductDefinitionFormationWithSpecifiedSource()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif