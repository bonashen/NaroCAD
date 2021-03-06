// File generated by CPPExt (MPV)
//
#ifndef _TNaming_DataMapOfShapePtrRefShape_OCWrappers_HeaderFile
#define _TNaming_DataMapOfShapePtrRefShape_OCWrappers_HeaderFile

// include native header
#include <TNaming_DataMapOfShapePtrRefShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTNaming_DataMapNodeOfDataMapOfShapePtrRefShape;
ref class OCTNaming_DataMapIteratorOfDataMapOfShapePtrRefShape;



public ref class OCTNaming_DataMapOfShapePtrRefShape  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTNaming_DataMapOfShapePtrRefShape(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTNaming_DataMapOfShapePtrRefShape(TNaming_DataMapOfShapePtrRefShape* nativeHandle);

// Methods PUBLIC


OCTNaming_DataMapOfShapePtrRefShape(Standard_Integer NbBuckets);


 /*instead*/  OCTNaming_DataMapOfShapePtrRefShape^ Assign(OCNaroWrappers::OCTNaming_DataMapOfShapePtrRefShape^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, TNaming_PtrRefShape I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  TNaming_PtrRefShape& Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  TNaming_PtrRefShape& ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCTNaming_DataMapOfShapePtrRefShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
