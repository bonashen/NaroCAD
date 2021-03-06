// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRepBuild_Pave_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_Pave_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRepBuild_Pave.hxx>
#include "../Converter.h"

#include "TopOpeBRepBuild_Loop.h"

#include "../TopoDS/TopoDS_Shape.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_Kind.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;



public ref class OCTopOpeBRepBuild_Pave : OCTopOpeBRepBuild_Loop {

protected:
  // dummy constructor;
  OCTopOpeBRepBuild_Pave(OCDummy^) : OCTopOpeBRepBuild_Loop((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepBuild_Pave(Handle(TopOpeBRepBuild_Pave)* nativeHandle);

// Methods PUBLIC

//! V = vertex, P = parameter of vertex <V> <br>
//!          bound = True if <V> is an old vertex <br>
//!          bound = False if <V> is a new vertex <br>
OCTopOpeBRepBuild_Pave(OCNaroWrappers::OCTopoDS_Shape^ V, Standard_Real P, System::Boolean bound);


 /*instead*/  void HasSameDomain(System::Boolean b) ;


 /*instead*/  void SameDomain(OCNaroWrappers::OCTopoDS_Shape^ VSD) ;


 /*instead*/  System::Boolean HasSameDomain() ;


 /*instead*/  OCTopoDS_Shape^ SameDomain() ;


 /*instead*/  OCTopoDS_Shape^ Vertex() ;


 /*instead*/  OCTopoDS_Shape^ ChangeVertex() ;


 /*instead*/  Standard_Real Parameter() ;


 /*instead*/  void Parameter(Standard_Real Par) ;


 /*instead*/  OCTopOpeBRepDS_Kind InterferenceType() ;


virtual /*instead*/  System::Boolean IsShape() override;


virtual /*instead*/  OCTopoDS_Shape^ Shape() override;


virtual /*instead*/  void Dump() override;

~OCTopOpeBRepBuild_Pave()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
