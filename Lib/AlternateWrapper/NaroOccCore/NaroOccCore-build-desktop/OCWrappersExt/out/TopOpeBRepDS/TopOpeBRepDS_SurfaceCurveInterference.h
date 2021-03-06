// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRepDS_SurfaceCurveInterference_OCWrappers_HeaderFile
#define _TopOpeBRepDS_SurfaceCurveInterference_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRepDS_SurfaceCurveInterference.hxx>
#include "../Converter.h"

#include "TopOpeBRepDS_Interference.h"

#include "TopOpeBRepDS_Kind.h"


namespace OCNaroWrappers
{

ref class OCGeom2d_Curve;
ref class OCTopOpeBRepDS_Transition;
ref class OCTopOpeBRepDS_Interference;


//! an interference with a 2d curve <br>
public ref class OCTopOpeBRepDS_SurfaceCurveInterference : OCTopOpeBRepDS_Interference {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_SurfaceCurveInterference(OCDummy^) : OCTopOpeBRepDS_Interference((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_SurfaceCurveInterference(Handle(TopOpeBRepDS_SurfaceCurveInterference)* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_SurfaceCurveInterference();


OCTopOpeBRepDS_SurfaceCurveInterference(OCNaroWrappers::OCTopOpeBRepDS_Transition^ Transition, OCTopOpeBRepDS_Kind SupportType, Standard_Integer Support, OCTopOpeBRepDS_Kind GeometryType, Standard_Integer Geometry, OCNaroWrappers::OCGeom2d_Curve^ PC);


OCTopOpeBRepDS_SurfaceCurveInterference(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I);


 /*instead*/  OCGeom2d_Curve^ PCurve() ;


 /*instead*/  void PCurve(OCNaroWrappers::OCGeom2d_Curve^ PC) ;


 /*instead*/  Standard_OStream& DumpPCurve(Standard_OStream& OS, System::Boolean compact) ;


virtual /*instead*/  Standard_OStream& Dump(Standard_OStream& OS) override;

~OCTopOpeBRepDS_SurfaceCurveInterference()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
