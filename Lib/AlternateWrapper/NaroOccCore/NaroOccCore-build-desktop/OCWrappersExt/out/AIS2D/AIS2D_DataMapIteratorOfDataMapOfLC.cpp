// File generated by CPPExt (CPP file)
//

#include "AIS2D_DataMapIteratorOfDataMapOfLC.h"
#include "../Converter.h"
#include "AIS2D_LocalContext.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "AIS2D_DataMapOfLC.h"
#include "AIS2D_DataMapNodeOfDataMapOfLC.h"


using namespace OCNaroWrappers;

OCAIS2D_DataMapIteratorOfDataMapOfLC::OCAIS2D_DataMapIteratorOfDataMapOfLC(AIS2D_DataMapIteratorOfDataMapOfLC* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAIS2D_DataMapIteratorOfDataMapOfLC::OCAIS2D_DataMapIteratorOfDataMapOfLC() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new AIS2D_DataMapIteratorOfDataMapOfLC();
}

OCAIS2D_DataMapIteratorOfDataMapOfLC::OCAIS2D_DataMapIteratorOfDataMapOfLC(OCNaroWrappers::OCAIS2D_DataMapOfLC^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new AIS2D_DataMapIteratorOfDataMapOfLC(*((AIS2D_DataMapOfLC*)aMap->Handle));
}

 void OCAIS2D_DataMapIteratorOfDataMapOfLC::Initialize(OCNaroWrappers::OCAIS2D_DataMapOfLC^ aMap)
{
  ((AIS2D_DataMapIteratorOfDataMapOfLC*)nativeHandle)->Initialize(*((AIS2D_DataMapOfLC*)aMap->Handle));
}

 Standard_Integer OCAIS2D_DataMapIteratorOfDataMapOfLC::Key()
{
  return ((AIS2D_DataMapIteratorOfDataMapOfLC*)nativeHandle)->Key();
}

OCAIS2D_LocalContext^ OCAIS2D_DataMapIteratorOfDataMapOfLC::Value()
{
  Handle(AIS2D_LocalContext) tmp = ((AIS2D_DataMapIteratorOfDataMapOfLC*)nativeHandle)->Value();
  return gcnew OCAIS2D_LocalContext(&tmp);
}

