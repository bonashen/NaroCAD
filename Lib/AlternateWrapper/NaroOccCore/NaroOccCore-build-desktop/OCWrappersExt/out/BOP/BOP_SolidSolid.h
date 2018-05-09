// File generated by CPPExt (MPV)
//
#ifndef _BOP_SolidSolid_OCWrappers_HeaderFile
#define _BOP_SolidSolid_OCWrappers_HeaderFile

// include native header
#include <BOP_SolidSolid.hxx>
#include "../Converter.h"

#include "BOP_ShellSolid.h"

#include "../TopoDS/TopoDS_Solid.h"
#include "BOP_ShellSolid.h"
#include "../TopAbs/TopAbs_State.h"


namespace OCNaroWrappers
{

ref class OCBOPTools_DSFiller;
ref class OCBOP_HistoryCollector;
ref class OCTopTools_ListOfShape;
ref class OCBOP_ShellFaceSet;
ref class OCTopoDS_Shape;
ref class OCTopTools_DataMapOfShapeInteger;
ref class OCBOPTColStd_IndexedDataMapOfIntegerIndexedMapOfInteger;



//!        Performs Boolean Operations  (BO) <br>
//!        Common,Cut,Fuse for solids as <br>
//!        arguments <br>
public ref class OCBOP_SolidSolid  : public OCBOP_ShellSolid {

protected:
  // dummy constructor;
  OCBOP_SolidSolid(OCDummy^) : OCBOP_ShellSolid((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOP_SolidSolid(BOP_SolidSolid* nativeHandle);

// Methods PUBLIC


//! Empty constructor; <br>
OCBOP_SolidSolid();


//! See base classes, please <br>
virtual /*instead*/  void DoWithFiller(OCNaroWrappers::OCBOPTools_DSFiller^ aDSF) override;


//! Destructor <br>
virtual /*instead*/  void Destroy() override;


//! See base classes, please <br>
virtual /*instead*/  void DoNewFaces() override;


//! See base classes, please <br>
virtual /*instead*/  void BuildResult() override;


virtual /*instead*/  void SetHistoryCollector(OCNaroWrappers::OCBOP_HistoryCollector^ theHistory) override;

~OCBOP_SolidSolid()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif