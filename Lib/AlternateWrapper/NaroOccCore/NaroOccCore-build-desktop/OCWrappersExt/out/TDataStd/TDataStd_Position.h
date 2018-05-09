// File generated by CPPExt (Transient)
//
#ifndef _TDataStd_Position_OCWrappers_HeaderFile
#define _TDataStd_Position_OCWrappers_HeaderFile

// include the wrapped class
#include <TDataStd_Position.hxx>
#include "../Converter.h"

#include "../TDF/TDF_Attribute.h"

#include "../gp/gp_Pnt.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCgp_Pnt;
ref class OCStandard_GUID;
ref class OCTDF_Attribute;
ref class OCTDF_RelocationTable;


//! Position of a Label <br>
public ref class OCTDataStd_Position : OCTDF_Attribute {

protected:
  // dummy constructor;
  OCTDataStd_Position(OCDummy^) : OCTDF_Attribute((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDataStd_Position(Handle(TDataStd_Position)* nativeHandle);

// Methods PUBLIC

//! Create if not found the TDataStd_Position attribute set its position to <aPos> <br>
static /*instead*/  void Set(OCNaroWrappers::OCTDF_Label^ aLabel, OCNaroWrappers::OCgp_Pnt^ aPos) ;

//! Find an existing, or create an empty, Position. <br>
//!            the Position attribute is returned. <br>
static /*instead*/  OCTDataStd_Position^ Set(OCNaroWrappers::OCTDF_Label^ aLabel) ;

//! Search label <aLabel) for the TDataStd_Position attribute and get its position <br>
//!          if found returns True <br>
static /*instead*/  System::Boolean Get(OCNaroWrappers::OCTDF_Label^ aLabel, OCNaroWrappers::OCgp_Pnt^ aPos) ;


OCTDataStd_Position();

//! Returns the ID of the attribute. <br>
virtual /*instead*/  OCStandard_GUID^ ID() ;

//! Returns the ID of the attribute. <br>
static /*instead*/  OCStandard_GUID^ GetID() ;

//! Restores the contents from <anAttribute> into this <br>
//!          one. It is used when aborting a transaction. <br>
//! <br>
virtual /*instead*/  void Restore(OCNaroWrappers::OCTDF_Attribute^ anAttribute) ;

//! Returns an new empty attribute from the good end <br>
//!          type. It is used by the copy algorithm. <br>
virtual /*instead*/  OCTDF_Attribute^ NewEmpty() ;

//! This method is different from the "Copy" one, <br>
//!          because it is used when copying an attribute from <br>
//!          a source structure into a target structure. This <br>
//!          method pastes the current attribute to the label <br>
//!          corresponding to the insertor. The pasted <br>
//!          attribute may be a brand new one or a new version <br>
//!          of the previous one. <br>
virtual /*instead*/  void Paste(OCNaroWrappers::OCTDF_Attribute^ intoAttribute, OCNaroWrappers::OCTDF_RelocationTable^ aRelocTationable) ;


 /*instead*/  OCgp_Pnt^ GetPosition() ;


 /*instead*/  void SetPosition(OCNaroWrappers::OCgp_Pnt^ aPos) ;

~OCTDataStd_Position()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif