// File generated by CPPExt (MPV)
//
#ifndef _math_MultipleVarFunction_OCWrappers_HeaderFile
#define _math_MultipleVarFunction_OCWrappers_HeaderFile

// include native header
#include <math_MultipleVarFunction.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCmath_Vector;



//! Describes the virtual functions associated with a multiple variable function. <br>
public ref class OCmath_MultipleVarFunction  {

protected:
  math_MultipleVarFunction* nativeHandle;
  OCmath_MultipleVarFunction(OCDummy^) {};

public:
  property math_MultipleVarFunction* Handle
  {
    math_MultipleVarFunction* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_MultipleVarFunction(math_MultipleVarFunction* nativeHandle);

// Methods PUBLIC

//! return the state of the function corresponding to the latestt <br>
//!          call of any methods associated to the function. This <br>
//!          function is called by each of the algorithms described <br>
//!          later which define the function Integer <br>
//!          Algorithm::StateNumber(). The algorithm has the <br>
//!          responsibility to call this function when it has found <br>
//!          a solution (i.e. a root or a minimum) and has to maintain <br>
//!          the association between the solution found and this <br>
//!          StateNumber. <br>
//!          Byu default, this method returns 0 (which means for the <br>
//!          algorithm: no state has been saved). It is the <br>
//!          responsibility of the programmer to decide if he needs <br>
//!          to save the current state of the function and to return <br>
//!          an Integer that allows retrieval of the state. <br>
virtual /*instead*/  Standard_Integer GetStateNumber() ;

~OCmath_MultipleVarFunction()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
