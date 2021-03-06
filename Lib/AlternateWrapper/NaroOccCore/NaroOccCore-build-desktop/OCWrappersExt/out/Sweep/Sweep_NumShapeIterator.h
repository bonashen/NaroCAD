// File generated by CPPExt (MPV)
//
#ifndef _Sweep_NumShapeIterator_OCWrappers_HeaderFile
#define _Sweep_NumShapeIterator_OCWrappers_HeaderFile

// include native header
#include <Sweep_NumShapeIterator.hxx>
#include "../Converter.h"


#include "Sweep_NumShape.h"
#include "../TopAbs/TopAbs_Orientation.h"


namespace OCNaroWrappers
{

ref class OCSweep_NumShape;


//! This class provides iteration services required by <br>
//!          the   Swept Primitives  for   a Directing NumShape <br>
//!          Line. <br>
//! <br>
public ref class OCSweep_NumShapeIterator  {

protected:
  Sweep_NumShapeIterator* nativeHandle;
  OCSweep_NumShapeIterator(OCDummy^) {};

public:
  property Sweep_NumShapeIterator* Handle
  {
    Sweep_NumShapeIterator* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCSweep_NumShapeIterator(Sweep_NumShapeIterator* nativeHandle);

// Methods PUBLIC


OCSweep_NumShapeIterator();

//! Resest the NumShapeIterator on sub-shapes of <aShape>. <br>
 /*instead*/  void Init(OCNaroWrappers::OCSweep_NumShape^ aShape) ;

//! Returns True if there is a current sub-shape. <br>
//! <br>
 /*instead*/  System::Boolean More() ;

//! Moves to the next sub-shape. <br>
 /*instead*/  void Next() ;

//! Returns the current sub-shape. <br>
 /*instead*/  OCSweep_NumShape^ Value() ;

//! Returns the orientation of the current sub-shape. <br>
 /*instead*/  OCTopAbs_Orientation Orientation() ;

~OCSweep_NumShapeIterator()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
