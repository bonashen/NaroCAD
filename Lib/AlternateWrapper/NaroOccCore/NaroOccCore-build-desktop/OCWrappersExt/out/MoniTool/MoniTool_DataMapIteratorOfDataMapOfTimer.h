// File generated by CPPExt (MPV)
//
#ifndef _MoniTool_DataMapIteratorOfDataMapOfTimer_OCWrappers_HeaderFile
#define _MoniTool_DataMapIteratorOfDataMapOfTimer_OCWrappers_HeaderFile

// include native header
#include <MoniTool_DataMapIteratorOfDataMapOfTimer.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCMoniTool_Timer;
ref class OCMoniTool_MTHasher;
ref class OCMoniTool_DataMapOfTimer;
ref class OCMoniTool_DataMapNodeOfDataMapOfTimer;



public ref class OCMoniTool_DataMapIteratorOfDataMapOfTimer  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMoniTool_DataMapIteratorOfDataMapOfTimer(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMoniTool_DataMapIteratorOfDataMapOfTimer(MoniTool_DataMapIteratorOfDataMapOfTimer* nativeHandle);

// Methods PUBLIC


OCMoniTool_DataMapIteratorOfDataMapOfTimer();


OCMoniTool_DataMapIteratorOfDataMapOfTimer(OCNaroWrappers::OCMoniTool_DataMapOfTimer^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMoniTool_DataMapOfTimer^ aMap) ;


 /*instead*/  System::String^ Key() ;


 /*instead*/  OCMoniTool_Timer^ Value() ;

~OCMoniTool_DataMapIteratorOfDataMapOfTimer()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
