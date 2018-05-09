// File generated by CPPExt (CPP file)
//

#include "MoniTool_SequenceNodeOfSequenceOfElement.h"
#include "../Converter.h"
#include "MoniTool_Element.h"
#include "MoniTool_SequenceOfElement.h"


using namespace OCNaroWrappers;

OCMoniTool_SequenceNodeOfSequenceOfElement::OCMoniTool_SequenceNodeOfSequenceOfElement(Handle(MoniTool_SequenceNodeOfSequenceOfElement)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MoniTool_SequenceNodeOfSequenceOfElement(*nativeHandle);
}

OCMoniTool_SequenceNodeOfSequenceOfElement::OCMoniTool_SequenceNodeOfSequenceOfElement(OCNaroWrappers::OCMoniTool_Element^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MoniTool_SequenceNodeOfSequenceOfElement(new MoniTool_SequenceNodeOfSequenceOfElement(*((Handle_MoniTool_Element*)I->Handle), n, p));
}

OCMoniTool_Element^ OCMoniTool_SequenceNodeOfSequenceOfElement::Value()
{
  Handle(MoniTool_Element) tmp = (*((Handle_MoniTool_SequenceNodeOfSequenceOfElement*)nativeHandle))->Value();
  return gcnew OCMoniTool_Element(&tmp);
}

