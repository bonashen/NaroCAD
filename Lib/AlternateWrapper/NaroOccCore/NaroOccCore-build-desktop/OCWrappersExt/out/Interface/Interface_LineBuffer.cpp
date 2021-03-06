// File generated by CPPExt (CPP file)
//

#include "Interface_LineBuffer.h"
#include "../Converter.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../TCollection/TCollection_HAsciiString.h"


using namespace OCNaroWrappers;

OCInterface_LineBuffer::OCInterface_LineBuffer(Interface_LineBuffer* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCInterface_LineBuffer::OCInterface_LineBuffer(Standard_Integer size) 
{
  nativeHandle = new Interface_LineBuffer(size);
}

 void OCInterface_LineBuffer::SetMax(Standard_Integer max)
{
  ((Interface_LineBuffer*)nativeHandle)->SetMax(max);
}

 void OCInterface_LineBuffer::SetInitial(Standard_Integer initial)
{
  ((Interface_LineBuffer*)nativeHandle)->SetInitial(initial);
}

 void OCInterface_LineBuffer::SetKeep()
{
  ((Interface_LineBuffer*)nativeHandle)->SetKeep();
}

 System::Boolean OCInterface_LineBuffer::CanGet(Standard_Integer more)
{
  return OCConverter::StandardBooleanToBoolean(((Interface_LineBuffer*)nativeHandle)->CanGet(more));
}

 System::String^ OCInterface_LineBuffer::Content()
{
  return OCConverter::StandardCStringToString(((Interface_LineBuffer*)nativeHandle)->Content());
}

 Standard_Integer OCInterface_LineBuffer::Length()
{
  return ((Interface_LineBuffer*)nativeHandle)->Length();
}

 void OCInterface_LineBuffer::Clear()
{
  ((Interface_LineBuffer*)nativeHandle)->Clear();
}

 void OCInterface_LineBuffer::FreezeInitial()
{
  ((Interface_LineBuffer*)nativeHandle)->FreezeInitial();
}

 void OCInterface_LineBuffer::Move(OCNaroWrappers::OCTCollection_AsciiString^ str)
{
  ((Interface_LineBuffer*)nativeHandle)->Move(*((TCollection_AsciiString*)str->Handle));
}

 void OCInterface_LineBuffer::Move(OCNaroWrappers::OCTCollection_HAsciiString^ str)
{
  ((Interface_LineBuffer*)nativeHandle)->Move(*((Handle_TCollection_HAsciiString*)str->Handle));
}

OCTCollection_HAsciiString^ OCInterface_LineBuffer::Moved()
{
  Handle(TCollection_HAsciiString) tmp = ((Interface_LineBuffer*)nativeHandle)->Moved();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCInterface_LineBuffer::Add(System::String^ text)
{
  ((Interface_LineBuffer*)nativeHandle)->Add(OCConverter::StringToStandardCString(text));
}

 void OCInterface_LineBuffer::Add(System::String^ text, Standard_Integer lntext)
{
  ((Interface_LineBuffer*)nativeHandle)->Add(OCConverter::StringToStandardCString(text), lntext);
}

 void OCInterface_LineBuffer::Add(OCNaroWrappers::OCTCollection_AsciiString^ text)
{
  ((Interface_LineBuffer*)nativeHandle)->Add(*((TCollection_AsciiString*)text->Handle));
}

 void OCInterface_LineBuffer::Add(Standard_Character text)
{
  ((Interface_LineBuffer*)nativeHandle)->Add(text);
}


