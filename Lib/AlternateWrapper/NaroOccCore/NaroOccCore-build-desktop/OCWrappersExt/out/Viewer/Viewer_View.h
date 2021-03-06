// File generated by CPPExt (Transient)
//
#ifndef _Viewer_View_OCWrappers_HeaderFile
#define _Viewer_View_OCWrappers_HeaderFile

// include the wrapped class
#include <Viewer_View.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{



//! This class defines a view. <br>
public ref class OCViewer_View : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCViewer_View(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCViewer_View(Handle(Viewer_View)* nativeHandle);

// Methods PUBLIC


OCViewer_View();

//! sets the immediate update mode and returns the previous one. <br>
 /*instead*/  System::Boolean SetImmediateUpdate(System::Boolean onoff) ;

~OCViewer_View()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
