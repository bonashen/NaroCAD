// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_Group_OCWrappers_HeaderFile
#define _StepBasic_Group_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_Group.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;


//! Representation of STEP entity Group <br>
public ref class OCStepBasic_Group : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_Group(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_Group(Handle(StepBasic_Group)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepBasic_Group();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasDescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription) ;

//! Returns field Name <br>
 /*instead*/  OCTCollection_HAsciiString^ Name() ;

//! Set field Name <br>
 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name) ;

//! Returns field Description <br>
 /*instead*/  OCTCollection_HAsciiString^ Description() ;

//! Set field Description <br>
 /*instead*/  void SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ Description) ;

//! Returns True if optional field Description is defined <br>
 /*instead*/  System::Boolean HasDescription() ;

~OCStepBasic_Group()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif