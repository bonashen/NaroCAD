// File generated by CPPExt (CPP file)
//

#include "BOPTools_IMapOfPaveBlock.h"
#include "../Converter.h"
#include "BOPTools_PaveBlock.h"
#include "BOPTools_PaveBlockMapHasher.h"
#include "BOPTools_IndexedMapNodeOfIMapOfPaveBlock.h"


using namespace OCNaroWrappers;

OCBOPTools_IMapOfPaveBlock::OCBOPTools_IMapOfPaveBlock(BOPTools_IMapOfPaveBlock* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_IMapOfPaveBlock::OCBOPTools_IMapOfPaveBlock(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_IMapOfPaveBlock(NbBuckets);
}

OCBOPTools_IMapOfPaveBlock^ OCBOPTools_IMapOfPaveBlock::Assign(OCNaroWrappers::OCBOPTools_IMapOfPaveBlock^ Other)
{
  BOPTools_IMapOfPaveBlock* tmp = new BOPTools_IMapOfPaveBlock(0);
  *tmp = ((BOPTools_IMapOfPaveBlock*)nativeHandle)->Assign(*((BOPTools_IMapOfPaveBlock*)Other->Handle));
  return gcnew OCBOPTools_IMapOfPaveBlock(tmp);
}

 void OCBOPTools_IMapOfPaveBlock::ReSize(Standard_Integer NbBuckets)
{
  ((BOPTools_IMapOfPaveBlock*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCBOPTools_IMapOfPaveBlock::Add(OCNaroWrappers::OCBOPTools_PaveBlock^ K)
{
  return ((BOPTools_IMapOfPaveBlock*)nativeHandle)->Add(*((BOPTools_PaveBlock*)K->Handle));
}

 void OCBOPTools_IMapOfPaveBlock::Substitute(Standard_Integer I, OCNaroWrappers::OCBOPTools_PaveBlock^ K)
{
  ((BOPTools_IMapOfPaveBlock*)nativeHandle)->Substitute(I, *((BOPTools_PaveBlock*)K->Handle));
}

 void OCBOPTools_IMapOfPaveBlock::RemoveLast()
{
  ((BOPTools_IMapOfPaveBlock*)nativeHandle)->RemoveLast();
}

 System::Boolean OCBOPTools_IMapOfPaveBlock::Contains(OCNaroWrappers::OCBOPTools_PaveBlock^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_IMapOfPaveBlock*)nativeHandle)->Contains(*((BOPTools_PaveBlock*)K->Handle)));
}

OCBOPTools_PaveBlock^ OCBOPTools_IMapOfPaveBlock::FindKey(Standard_Integer I)
{
  BOPTools_PaveBlock* tmp = new BOPTools_PaveBlock();
  *tmp = ((BOPTools_IMapOfPaveBlock*)nativeHandle)->FindKey(I);
  return gcnew OCBOPTools_PaveBlock(tmp);
}

 Standard_Integer OCBOPTools_IMapOfPaveBlock::FindIndex(OCNaroWrappers::OCBOPTools_PaveBlock^ K)
{
  return ((BOPTools_IMapOfPaveBlock*)nativeHandle)->FindIndex(*((BOPTools_PaveBlock*)K->Handle));
}


