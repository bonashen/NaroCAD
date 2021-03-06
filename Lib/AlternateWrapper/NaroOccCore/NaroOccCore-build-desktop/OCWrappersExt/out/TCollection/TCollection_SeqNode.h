// File generated by CPPExt (Transient)
//
#ifndef _TCollection_SeqNode_OCWrappers_HeaderFile
#define _TCollection_SeqNode_OCWrappers_HeaderFile

// include the wrapped class
#include <TCollection_SeqNode.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{




public ref class OCTCollection_SeqNode : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTCollection_SeqNode(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTCollection_SeqNode(Handle(TCollection_SeqNode)* nativeHandle);

// Methods PUBLIC


OCTCollection_SeqNode(TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  TCollection_SeqNodePtr& Next() ;


 /*instead*/  TCollection_SeqNodePtr& Previous() ;

~OCTCollection_SeqNode()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
