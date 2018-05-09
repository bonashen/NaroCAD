// File generated by CPPExt (MPV)
//
#ifndef _StepShape_VertexLoop_OCWrappers_HeaderFile
#define _StepShape_VertexLoop_OCWrappers_HeaderFile

// include native header
#include <StepShape_VertexLoop.hxx>
#include "../Converter.h"

#include "StepShape_Loop.h"

#include "StepShape_Vertex.h"
#include "StepShape_Loop.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepShape_Vertex;



public ref class OCStepShape_VertexLoop  : public OCStepShape_Loop {

protected:
  // dummy constructor;
  OCStepShape_VertexLoop(OCDummy^) : OCStepShape_Loop((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_VertexLoop(StepShape_VertexLoop* nativeHandle);

// Methods PUBLIC

//! Returns a VertexLoop <br>
OCStepShape_VertexLoop();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_Vertex^ aLoopVertex) ;


 /*instead*/  void SetLoopVertex(OCNaroWrappers::OCStepShape_Vertex^ aLoopVertex) ;


 /*instead*/  OCStepShape_Vertex^ LoopVertex() ;

~OCStepShape_VertexLoop()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif