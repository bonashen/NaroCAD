// File generated by CPPExt (CPP file)
//

#include "OSD_DirectoryIterator.h"
#include "../Converter.h"
#include "OSD_Path.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "OSD_Directory.h"


using namespace OCNaroWrappers;

OCOSD_DirectoryIterator::OCOSD_DirectoryIterator(OSD_DirectoryIterator* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCOSD_DirectoryIterator::OCOSD_DirectoryIterator() 
{
  nativeHandle = new OSD_DirectoryIterator();
}

OCOSD_DirectoryIterator::OCOSD_DirectoryIterator(OCNaroWrappers::OCOSD_Path^ where, OCNaroWrappers::OCTCollection_AsciiString^ Mask) 
{
  nativeHandle = new OSD_DirectoryIterator(*((OSD_Path*)where->Handle), *((TCollection_AsciiString*)Mask->Handle));
}

 void OCOSD_DirectoryIterator::Initialize(OCNaroWrappers::OCOSD_Path^ where, OCNaroWrappers::OCTCollection_AsciiString^ Mask)
{
  ((OSD_DirectoryIterator*)nativeHandle)->Initialize(*((OSD_Path*)where->Handle), *((TCollection_AsciiString*)Mask->Handle));
}

 System::Boolean OCOSD_DirectoryIterator::More()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_DirectoryIterator*)nativeHandle)->More());
}

 void OCOSD_DirectoryIterator::Next()
{
  ((OSD_DirectoryIterator*)nativeHandle)->Next();
}

OCOSD_Directory^ OCOSD_DirectoryIterator::Values()
{
  OSD_Directory* tmp = new OSD_Directory();
  *tmp = ((OSD_DirectoryIterator*)nativeHandle)->Values();
  return gcnew OCOSD_Directory(tmp);
}

 System::Boolean OCOSD_DirectoryIterator::Failed()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_DirectoryIterator*)nativeHandle)->Failed());
}

 void OCOSD_DirectoryIterator::Reset()
{
  ((OSD_DirectoryIterator*)nativeHandle)->Reset();
}

 void OCOSD_DirectoryIterator::Perror()
{
  ((OSD_DirectoryIterator*)nativeHandle)->Perror();
}

 Standard_Integer OCOSD_DirectoryIterator::Error()
{
  return ((OSD_DirectoryIterator*)nativeHandle)->Error();
}

