// File generated by CPPExt (MPV)
//
#ifndef _BooleanOperations_Explorer_OCWrappers_HeaderFile
#define _BooleanOperations_Explorer_OCWrappers_HeaderFile

// include native header
#include <BooleanOperations_Explorer.hxx>
#include "../Converter.h"


#include "../TopAbs/TopAbs_ShapeEnum.h"


namespace OCNaroWrappers
{

ref class OCBooleanOperations_ShapesDataStructure;


//!  the explorer associated  to the Data Structure to <br>
//!          retrieve   subshapes of a  given   shape stored in <br>
//!          ShapesDataStructure. <br>
public ref class OCBooleanOperations_Explorer  {

protected:
  BooleanOperations_Explorer* nativeHandle;
  OCBooleanOperations_Explorer(OCDummy^) {};

public:
  property BooleanOperations_Explorer* Handle
  {
    BooleanOperations_Explorer* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBooleanOperations_Explorer(BooleanOperations_Explorer* nativeHandle);

// Methods PUBLIC


OCBooleanOperations_Explorer(OCNaroWrappers::OCBooleanOperations_ShapesDataStructure^ SDS);


virtual /*instead*/  void Delete() ;


virtual /*instead*/  void Init(Standard_Integer aShape, OCTopAbs_ShapeEnum TargetToFind, OCTopAbs_ShapeEnum TargetToAvoid) ;


virtual /*instead*/  void Next() ;


 /*instead*/  System::Boolean More() ;


virtual /*instead*/  Standard_Integer Current() ;


virtual /*instead*/  void Dump(Standard_OStream& S) ;

~OCBooleanOperations_Explorer()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
