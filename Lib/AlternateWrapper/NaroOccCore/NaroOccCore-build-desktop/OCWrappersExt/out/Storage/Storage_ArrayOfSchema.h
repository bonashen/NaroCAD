// File generated by CPPExt (MPV)
//
#ifndef _Storage_ArrayOfSchema_OCWrappers_HeaderFile
#define _Storage_ArrayOfSchema_OCWrappers_HeaderFile

// include native header
#include <Storage_ArrayOfSchema.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStorage_Schema;



public ref class OCStorage_ArrayOfSchema  {

protected:
  Storage_ArrayOfSchema* nativeHandle;
  OCStorage_ArrayOfSchema(OCDummy^) {};

public:
  property Storage_ArrayOfSchema* Handle
  {
    Storage_ArrayOfSchema* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStorage_ArrayOfSchema(Storage_ArrayOfSchema* nativeHandle);

// Methods PUBLIC


OCStorage_ArrayOfSchema(Standard_Integer Low, Standard_Integer Up);


OCStorage_ArrayOfSchema(OCNaroWrappers::OCStorage_Schema^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStorage_Schema^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStorage_ArrayOfSchema^ Assign(OCNaroWrappers::OCStorage_ArrayOfSchema^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStorage_Schema^ Value) ;


 /*instead*/  OCStorage_Schema^ Value(Standard_Integer Index) ;


 /*instead*/  OCStorage_Schema^ ChangeValue(Standard_Integer Index) ;

~OCStorage_ArrayOfSchema()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
