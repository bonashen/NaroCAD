// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_Document_OCWrappers_HeaderFile
#define _StepBasic_Document_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_Document.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepBasic_DocumentType;


//! Representation of STEP entity Document <br>
public ref class OCStepBasic_Document : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_Document(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_Document(Handle(StepBasic_Document)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepBasic_Document();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aId, OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasDescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepBasic_DocumentType^ aKind) ;

//! Returns field Id <br>
 /*instead*/  OCTCollection_HAsciiString^ Id() ;

//! Set field Id <br>
 /*instead*/  void SetId(OCNaroWrappers::OCTCollection_HAsciiString^ Id) ;

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

//! Returns field Kind <br>
 /*instead*/  OCStepBasic_DocumentType^ Kind() ;

//! Set field Kind <br>
 /*instead*/  void SetKind(OCNaroWrappers::OCStepBasic_DocumentType^ Kind) ;

~OCStepBasic_Document()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
