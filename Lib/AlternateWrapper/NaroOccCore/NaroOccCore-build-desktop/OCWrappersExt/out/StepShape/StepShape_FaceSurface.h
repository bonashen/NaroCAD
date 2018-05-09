// File generated by CPPExt (MPV)
//
#ifndef _StepShape_FaceSurface_OCWrappers_HeaderFile
#define _StepShape_FaceSurface_OCWrappers_HeaderFile

// include native header
#include <StepShape_FaceSurface.hxx>
#include "../Converter.h"

#include "StepShape_Face.h"

#include "../StepGeom/StepGeom_Surface.h"
#include "StepShape_Face.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepShape_HArray1OfFaceBound;
ref class OCStepGeom_Surface;



public ref class OCStepShape_FaceSurface  : public OCStepShape_Face {

protected:
  // dummy constructor;
  OCStepShape_FaceSurface(OCDummy^) : OCStepShape_Face((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_FaceSurface(StepShape_FaceSurface* nativeHandle);

// Methods PUBLIC

//! Returns a FaceSurface <br>
OCStepShape_FaceSurface();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_HArray1OfFaceBound^ aBounds) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_HArray1OfFaceBound^ aBounds, OCNaroWrappers::OCStepGeom_Surface^ aFaceGeometry, System::Boolean aSameSense) ;


 /*instead*/  void SetFaceGeometry(OCNaroWrappers::OCStepGeom_Surface^ aFaceGeometry) ;


 /*instead*/  OCStepGeom_Surface^ FaceGeometry() ;


 /*instead*/  void SetSameSense(System::Boolean aSameSense) ;


 /*instead*/  System::Boolean SameSense() ;

~OCStepShape_FaceSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif