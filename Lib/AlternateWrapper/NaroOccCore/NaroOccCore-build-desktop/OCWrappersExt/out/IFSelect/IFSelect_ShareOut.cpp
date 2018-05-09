// File generated by CPPExt (CPP file)
//

#include "IFSelect_ShareOut.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "../Standard/Standard_Transient.h"
#include "IFSelect_Dispatch.h"
#include "IFSelect_GeneralModifier.h"
#include "IFSelect_Modifier.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCIFSelect_ShareOut::OCIFSelect_ShareOut(Handle(IFSelect_ShareOut)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_ShareOut(*nativeHandle);
}

OCIFSelect_ShareOut::OCIFSelect_ShareOut() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_ShareOut(new IFSelect_ShareOut());
}

 void OCIFSelect_ShareOut::Clear(System::Boolean onlydisp)
{
  (*((Handle_IFSelect_ShareOut*)nativeHandle))->Clear(OCConverter::BooleanToStandardBoolean(onlydisp));
}

 void OCIFSelect_ShareOut::ClearResult(System::Boolean alsoname)
{
  (*((Handle_IFSelect_ShareOut*)nativeHandle))->ClearResult(OCConverter::BooleanToStandardBoolean(alsoname));
}

 System::Boolean OCIFSelect_ShareOut::RemoveItem(OCNaroWrappers::OCStandard_Transient^ item)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_ShareOut*)nativeHandle))->RemoveItem(*((Handle_Standard_Transient*)item->Handle)));
}

 Standard_Integer OCIFSelect_ShareOut::LastRun()
{
  return (*((Handle_IFSelect_ShareOut*)nativeHandle))->LastRun();
}

 void OCIFSelect_ShareOut::SetLastRun(Standard_Integer last)
{
  (*((Handle_IFSelect_ShareOut*)nativeHandle))->SetLastRun(last);
}

 Standard_Integer OCIFSelect_ShareOut::NbDispatches()
{
  return (*((Handle_IFSelect_ShareOut*)nativeHandle))->NbDispatches();
}

 Standard_Integer OCIFSelect_ShareOut::DispatchRank(OCNaroWrappers::OCIFSelect_Dispatch^ disp)
{
  return (*((Handle_IFSelect_ShareOut*)nativeHandle))->DispatchRank(*((Handle_IFSelect_Dispatch*)disp->Handle));
}

OCIFSelect_Dispatch^ OCIFSelect_ShareOut::Dispatch(Standard_Integer num)
{
  Handle(IFSelect_Dispatch) tmp = (*((Handle_IFSelect_ShareOut*)nativeHandle))->Dispatch(num);
  return gcnew OCIFSelect_Dispatch(&tmp);
}

 void OCIFSelect_ShareOut::AddDispatch(OCNaroWrappers::OCIFSelect_Dispatch^ disp)
{
  (*((Handle_IFSelect_ShareOut*)nativeHandle))->AddDispatch(*((Handle_IFSelect_Dispatch*)disp->Handle));
}

 System::Boolean OCIFSelect_ShareOut::RemoveDispatch(Standard_Integer rank)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_ShareOut*)nativeHandle))->RemoveDispatch(rank));
}

 void OCIFSelect_ShareOut::AddModifier(OCNaroWrappers::OCIFSelect_GeneralModifier^ modifier, Standard_Integer atnum)
{
  (*((Handle_IFSelect_ShareOut*)nativeHandle))->AddModifier(*((Handle_IFSelect_GeneralModifier*)modifier->Handle), atnum);
}

 void OCIFSelect_ShareOut::AddModifier(OCNaroWrappers::OCIFSelect_GeneralModifier^ modifier, Standard_Integer dispnum, Standard_Integer atnum)
{
  (*((Handle_IFSelect_ShareOut*)nativeHandle))->AddModifier(*((Handle_IFSelect_GeneralModifier*)modifier->Handle), dispnum, atnum);
}

 void OCIFSelect_ShareOut::AddModif(OCNaroWrappers::OCIFSelect_GeneralModifier^ modifier, System::Boolean formodel, Standard_Integer atnum)
{
  (*((Handle_IFSelect_ShareOut*)nativeHandle))->AddModif(*((Handle_IFSelect_GeneralModifier*)modifier->Handle), OCConverter::BooleanToStandardBoolean(formodel), atnum);
}

 Standard_Integer OCIFSelect_ShareOut::NbModifiers(System::Boolean formodel)
{
  return (*((Handle_IFSelect_ShareOut*)nativeHandle))->NbModifiers(OCConverter::BooleanToStandardBoolean(formodel));
}

OCIFSelect_GeneralModifier^ OCIFSelect_ShareOut::GeneralModifier(System::Boolean formodel, Standard_Integer num)
{
  Handle(IFSelect_GeneralModifier) tmp = (*((Handle_IFSelect_ShareOut*)nativeHandle))->GeneralModifier(OCConverter::BooleanToStandardBoolean(formodel), num);
  return gcnew OCIFSelect_GeneralModifier(&tmp);
}

OCIFSelect_Modifier^ OCIFSelect_ShareOut::ModelModifier(Standard_Integer num)
{
  Handle(IFSelect_Modifier) tmp = (*((Handle_IFSelect_ShareOut*)nativeHandle))->ModelModifier(num);
  return gcnew OCIFSelect_Modifier(&tmp);
}

 Standard_Integer OCIFSelect_ShareOut::ModifierRank(OCNaroWrappers::OCIFSelect_GeneralModifier^ modifier)
{
  return (*((Handle_IFSelect_ShareOut*)nativeHandle))->ModifierRank(*((Handle_IFSelect_GeneralModifier*)modifier->Handle));
}

 System::Boolean OCIFSelect_ShareOut::RemoveModifier(System::Boolean formodel, Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_ShareOut*)nativeHandle))->RemoveModifier(OCConverter::BooleanToStandardBoolean(formodel), num));
}

 System::Boolean OCIFSelect_ShareOut::ChangeModifierRank(System::Boolean formodel, Standard_Integer befor, Standard_Integer after)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_ShareOut*)nativeHandle))->ChangeModifierRank(OCConverter::BooleanToStandardBoolean(formodel), befor, after));
}

 System::Boolean OCIFSelect_ShareOut::SetRootName(Standard_Integer num, OCNaroWrappers::OCTCollection_HAsciiString^ name)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_ShareOut*)nativeHandle))->SetRootName(num, *((Handle_TCollection_HAsciiString*)name->Handle)));
}

 System::Boolean OCIFSelect_ShareOut::HasRootName(Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_ShareOut*)nativeHandle))->HasRootName(num));
}

OCTCollection_HAsciiString^ OCIFSelect_ShareOut::RootName(Standard_Integer num)
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_IFSelect_ShareOut*)nativeHandle))->RootName(num);
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 Standard_Integer OCIFSelect_ShareOut::RootNumber(OCNaroWrappers::OCTCollection_HAsciiString^ name)
{
  return (*((Handle_IFSelect_ShareOut*)nativeHandle))->RootNumber(*((Handle_TCollection_HAsciiString*)name->Handle));
}

 void OCIFSelect_ShareOut::SetPrefix(OCNaroWrappers::OCTCollection_HAsciiString^ pref)
{
  (*((Handle_IFSelect_ShareOut*)nativeHandle))->SetPrefix(*((Handle_TCollection_HAsciiString*)pref->Handle));
}

 System::Boolean OCIFSelect_ShareOut::SetDefaultRootName(OCNaroWrappers::OCTCollection_HAsciiString^ defrt)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_IFSelect_ShareOut*)nativeHandle))->SetDefaultRootName(*((Handle_TCollection_HAsciiString*)defrt->Handle)));
}

 void OCIFSelect_ShareOut::SetExtension(OCNaroWrappers::OCTCollection_HAsciiString^ ext)
{
  (*((Handle_IFSelect_ShareOut*)nativeHandle))->SetExtension(*((Handle_TCollection_HAsciiString*)ext->Handle));
}

OCTCollection_HAsciiString^ OCIFSelect_ShareOut::Prefix()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_IFSelect_ShareOut*)nativeHandle))->Prefix();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

OCTCollection_HAsciiString^ OCIFSelect_ShareOut::DefaultRootName()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_IFSelect_ShareOut*)nativeHandle))->DefaultRootName();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

OCTCollection_HAsciiString^ OCIFSelect_ShareOut::Extension()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_IFSelect_ShareOut*)nativeHandle))->Extension();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

OCTCollection_AsciiString^ OCIFSelect_ShareOut::FileName(Standard_Integer dnum, Standard_Integer pnum, Standard_Integer nbpack)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_IFSelect_ShareOut*)nativeHandle))->FileName(dnum, pnum, nbpack);
  return gcnew OCTCollection_AsciiString(tmp);
}

