// File generated by CPPExt (CPP file)
//

#include "MoniTool_CaseData.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../gp/gp_XYZ.h"
#include "../gp/gp_XY.h"
#include "../Standard/Standard_Type.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../Message/Message_Msg.h"


using namespace OCNaroWrappers;

OCMoniTool_CaseData::OCMoniTool_CaseData(Handle(MoniTool_CaseData)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MoniTool_CaseData(*nativeHandle);
}

OCMoniTool_CaseData::OCMoniTool_CaseData(System::String^ caseid, System::String^ name) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MoniTool_CaseData(new MoniTool_CaseData(OCConverter::StringToStandardCString(caseid), OCConverter::StringToStandardCString(name)));
}

 void OCMoniTool_CaseData::SetCaseId(System::String^ caseid)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->SetCaseId(OCConverter::StringToStandardCString(caseid));
}

 void OCMoniTool_CaseData::SetName(System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->SetName(OCConverter::StringToStandardCString(name));
}

 System::String^ OCMoniTool_CaseData::CaseId()
{
  return OCConverter::StandardCStringToString((*((Handle_MoniTool_CaseData*)nativeHandle))->CaseId());
}

 System::String^ OCMoniTool_CaseData::Name()
{
  return OCConverter::StandardCStringToString((*((Handle_MoniTool_CaseData*)nativeHandle))->Name());
}

 System::Boolean OCMoniTool_CaseData::IsCheck()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->IsCheck());
}

 System::Boolean OCMoniTool_CaseData::IsWarning()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->IsWarning());
}

 System::Boolean OCMoniTool_CaseData::IsFail()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->IsFail());
}

 void OCMoniTool_CaseData::ResetCheck()
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->ResetCheck();
}

 void OCMoniTool_CaseData::SetWarning()
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->SetWarning();
}

 void OCMoniTool_CaseData::SetFail()
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->SetFail();
}

 void OCMoniTool_CaseData::SetChange()
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->SetChange();
}

 void OCMoniTool_CaseData::SetReplace(Standard_Integer num)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->SetReplace(num);
}

 void OCMoniTool_CaseData::AddData(OCNaroWrappers::OCStandard_Transient^ val, Standard_Integer kind, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddData(*((Handle_Standard_Transient*)val->Handle), kind, OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddRaised(System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddRaised(OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddShape(OCNaroWrappers::OCTopoDS_Shape^ sh, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddShape(*((TopoDS_Shape*)sh->Handle), OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddXYZ(OCNaroWrappers::OCgp_XYZ^ aXYZ, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddXYZ(*((gp_XYZ*)aXYZ->Handle), OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddXY(OCNaroWrappers::OCgp_XY^ aXY, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddXY(*((gp_XY*)aXY->Handle), OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddReal(Standard_Real val, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddReal(val, OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddReals(Standard_Real v1, Standard_Real v2, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddReals(v1, v2, OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddCPU(Standard_Real lastCPU, Standard_Real curCPU, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddCPU(lastCPU, curCPU, OCConverter::StringToStandardCString(name));
}

 Standard_Real OCMoniTool_CaseData::GetCPU()
{
  return (*((Handle_MoniTool_CaseData*)nativeHandle))->GetCPU();
}

 System::Boolean OCMoniTool_CaseData::LargeCPU(Standard_Real maxCPU, Standard_Real lastCPU, Standard_Real curCPU)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->LargeCPU(maxCPU, lastCPU, curCPU));
}

 void OCMoniTool_CaseData::AddGeom(OCNaroWrappers::OCStandard_Transient^ geom, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddGeom(*((Handle_Standard_Transient*)geom->Handle), OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddEntity(OCNaroWrappers::OCStandard_Transient^ ent, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddEntity(*((Handle_Standard_Transient*)ent->Handle), OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddText(System::String^ text, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddText(OCConverter::StringToStandardCString(text), OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddInteger(Standard_Integer val, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddInteger(val, OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::AddAny(OCNaroWrappers::OCStandard_Transient^ val, System::String^ name)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->AddAny(*((Handle_Standard_Transient*)val->Handle), OCConverter::StringToStandardCString(name));
}

 void OCMoniTool_CaseData::RemoveData(Standard_Integer num)
{
  (*((Handle_MoniTool_CaseData*)nativeHandle))->RemoveData(num);
}

 Standard_Integer OCMoniTool_CaseData::NbData()
{
  return (*((Handle_MoniTool_CaseData*)nativeHandle))->NbData();
}

OCStandard_Transient^ OCMoniTool_CaseData::Data(Standard_Integer nd)
{
  Handle(Standard_Transient) tmp = (*((Handle_MoniTool_CaseData*)nativeHandle))->Data(nd);
  return gcnew OCStandard_Transient(&tmp);
}

 System::Boolean OCMoniTool_CaseData::GetData(Standard_Integer nd, OCNaroWrappers::OCStandard_Type^ type, OCNaroWrappers::OCStandard_Transient^ val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->GetData(nd, *((Handle_Standard_Type*)type->Handle), *((Handle_Standard_Transient*)val->Handle)));
}

 Standard_Integer OCMoniTool_CaseData::Kind(Standard_Integer nd)
{
  return (*((Handle_MoniTool_CaseData*)nativeHandle))->Kind(nd);
}

OCTCollection_AsciiString^ OCMoniTool_CaseData::Name(Standard_Integer nd)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_MoniTool_CaseData*)nativeHandle))->Name(nd);
  return gcnew OCTCollection_AsciiString(tmp);
}

 Standard_Integer OCMoniTool_CaseData::NameNum(System::String^ name)
{
  return (*((Handle_MoniTool_CaseData*)nativeHandle))->NameNum(OCConverter::StringToStandardCString(name));
}

OCTopoDS_Shape^ OCMoniTool_CaseData::Shape(Standard_Integer nd)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_MoniTool_CaseData*)nativeHandle))->Shape(nd);
  return gcnew OCTopoDS_Shape(tmp);
}

 System::Boolean OCMoniTool_CaseData::XYZ(Standard_Integer nd, OCNaroWrappers::OCgp_XYZ^ val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->XYZ(nd, *((gp_XYZ*)val->Handle)));
}

 System::Boolean OCMoniTool_CaseData::XY(Standard_Integer nd, OCNaroWrappers::OCgp_XY^ val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->XY(nd, *((gp_XY*)val->Handle)));
}

 System::Boolean OCMoniTool_CaseData::Reals(Standard_Integer nd, Standard_Real& v1, Standard_Real& v2)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->Reals(nd, v1, v2));
}

 System::Boolean OCMoniTool_CaseData::Real(Standard_Integer nd, Standard_Real& val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->Real(nd, val));
}

 System::Boolean OCMoniTool_CaseData::Text(Standard_Integer nd, System::String^& text)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->Text(nd, OCConverter::StringToStandardCString(text)));
}

 System::Boolean OCMoniTool_CaseData::Integer(Standard_Integer nd, Standard_Integer& val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_CaseData*)nativeHandle))->Integer(nd, val));
}

OCMessage_Msg^ OCMoniTool_CaseData::Msg()
{
  Message_Msg* tmp = new Message_Msg();
  *tmp = (*((Handle_MoniTool_CaseData*)nativeHandle))->Msg();
  return gcnew OCMessage_Msg(tmp);
}

 void OCMoniTool_CaseData::SetDefWarning(System::String^ acode)
{
  MoniTool_CaseData::SetDefWarning(OCConverter::StringToStandardCString(acode));
}

 void OCMoniTool_CaseData::SetDefFail(System::String^ acode)
{
  MoniTool_CaseData::SetDefFail(OCConverter::StringToStandardCString(acode));
}

 Standard_Integer OCMoniTool_CaseData::DefCheck(System::String^ acode)
{
  return MoniTool_CaseData::DefCheck(OCConverter::StringToStandardCString(acode));
}

 void OCMoniTool_CaseData::SetDefMsg(System::String^ casecode, System::String^ mesdef)
{
  MoniTool_CaseData::SetDefMsg(OCConverter::StringToStandardCString(casecode), OCConverter::StringToStandardCString(mesdef));
}

 System::String^ OCMoniTool_CaseData::DefMsg(System::String^ casecode)
{
  return OCConverter::StandardCStringToString(MoniTool_CaseData::DefMsg(OCConverter::StringToStandardCString(casecode)));
}

