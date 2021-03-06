// File generated by CPPExt (MPV)
//
#ifndef _Resource_DataMapOfAsciiStringExtendedString_OCWrappers_HeaderFile
#define _Resource_DataMapOfAsciiStringExtendedString_OCWrappers_HeaderFile

// include native header
#include <Resource_DataMapOfAsciiStringExtendedString.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCTCollection_ExtendedString;
ref class OCResource_DataMapNodeOfDataMapOfAsciiStringExtendedString;
ref class OCResource_DataMapIteratorOfDataMapOfAsciiStringExtendedString;



public ref class OCResource_DataMapOfAsciiStringExtendedString  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCResource_DataMapOfAsciiStringExtendedString(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCResource_DataMapOfAsciiStringExtendedString(Resource_DataMapOfAsciiStringExtendedString* nativeHandle);

// Methods PUBLIC


OCResource_DataMapOfAsciiStringExtendedString(Standard_Integer NbBuckets);


 /*instead*/  OCResource_DataMapOfAsciiStringExtendedString^ Assign(OCNaroWrappers::OCResource_DataMapOfAsciiStringExtendedString^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTCollection_AsciiString^ K, OCNaroWrappers::OCTCollection_ExtendedString^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  OCTCollection_ExtendedString^ Find(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  OCTCollection_ExtendedString^ ChangeFind(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTCollection_AsciiString^ K) ;

~OCResource_DataMapOfAsciiStringExtendedString()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
