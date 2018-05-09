// File generated by CPPExt (MPV)
//
#ifndef _ChFiDS_FaceInterference_OCWrappers_HeaderFile
#define _ChFiDS_FaceInterference_OCWrappers_HeaderFile

// include native header
#include <ChFiDS_FaceInterference.hxx>
#include "../Converter.h"


#include "../TopAbs/TopAbs_Orientation.h"


namespace OCNaroWrappers
{

ref class OCGeom2d_Curve;


//! interference face/fillet <br>
public ref class OCChFiDS_FaceInterference  {

protected:
  ChFiDS_FaceInterference* nativeHandle;
  OCChFiDS_FaceInterference(OCDummy^) {};

public:
  property ChFiDS_FaceInterference* Handle
  {
    ChFiDS_FaceInterference* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCChFiDS_FaceInterference(ChFiDS_FaceInterference* nativeHandle);

// Methods PUBLIC


OCChFiDS_FaceInterference();


 /*instead*/  void SetInterference(Standard_Integer LineIndex, OCTopAbs_Orientation Trans, OCNaroWrappers::OCGeom2d_Curve^ PCurv1, OCNaroWrappers::OCGeom2d_Curve^ PCurv2) ;


 /*instead*/  void SetTransition(OCTopAbs_Orientation Trans) ;


 /*instead*/  void SetFirstParameter(Standard_Real U1) ;


 /*instead*/  void SetLastParameter(Standard_Real U1) ;


 /*instead*/  void SetParameter(Standard_Real U1, System::Boolean IsFirst) ;


 /*instead*/  Standard_Integer LineIndex() ;


 /*instead*/  void SetLineIndex(Standard_Integer I) ;


 /*instead*/  OCTopAbs_Orientation Transition() ;


 /*instead*/  OCGeom2d_Curve^ PCurveOnFace() ;


 /*instead*/  OCGeom2d_Curve^ PCurveOnSurf() ;


 /*instead*/  OCGeom2d_Curve^ ChangePCurveOnFace() ;


 /*instead*/  OCGeom2d_Curve^ ChangePCurveOnSurf() ;


 /*instead*/  Standard_Real FirstParameter() ;


 /*instead*/  Standard_Real LastParameter() ;


 /*instead*/  Standard_Real Parameter(System::Boolean IsFirst) ;

~OCChFiDS_FaceInterference()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif