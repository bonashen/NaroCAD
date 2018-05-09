// File generated by CPPExt (Transient)
//
#ifndef _AlienImage_AlienImageData_OCWrappers_HeaderFile
#define _AlienImage_AlienImageData_OCWrappers_HeaderFile

// include the wrapped class
#include <AlienImage_AlienImageData.hxx>
#include "../Converter.h"

#include "AlienImage_AlienImage.h"

#include "../TCollection/TCollection_AsciiString.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;


//! This class defines an Alien image. <br>
//! Alien Image is X11 . xwd image or SGI .rgb image for examples <br>
public ref class OCAlienImage_AlienImageData : OCAlienImage_AlienImage {

protected:
  // dummy constructor;
  OCAlienImage_AlienImageData(OCDummy^) : OCAlienImage_AlienImage((OCDummy^)nullptr) {};

public:

// constructor from native
OCAlienImage_AlienImageData(Handle(AlienImage_AlienImageData)* nativeHandle);

// Methods PUBLIC


OCAlienImage_AlienImageData();

//! Set Image name . <br>
virtual /*instead*/  void SetName(OCNaroWrappers::OCTCollection_AsciiString^ aName) ;

//! get Image name . <br>
virtual /*instead*/  OCTCollection_AsciiString^ Name() ;

~OCAlienImage_AlienImageData()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif