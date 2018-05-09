// File generated by CPPExt (CPP file)
//

#include "Interface_CopyTool.h"
#include "../Converter.h"
#include "Interface_InterfaceModel.h"
#include "Interface_CopyControl.h"
#include "Interface_CopyMap.h"
#include "../Standard/Standard_Transient.h"
#include "Interface_GeneralModule.h"
#include "Interface_GeneralLib.h"
#include "Interface_Protocol.h"
#include "Interface_EntityIterator.h"


using namespace OCNaroWrappers;

OCInterface_CopyTool::OCInterface_CopyTool(Interface_CopyTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCInterface_CopyTool::OCInterface_CopyTool(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_GeneralLib^ lib) 
{
  nativeHandle = new Interface_CopyTool(*((Handle_Interface_InterfaceModel*)amodel->Handle), *((Interface_GeneralLib*)lib->Handle));
}

OCInterface_CopyTool::OCInterface_CopyTool(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_Protocol^ protocol) 
{
  nativeHandle = new Interface_CopyTool(*((Handle_Interface_InterfaceModel*)amodel->Handle), *((Handle_Interface_Protocol*)protocol->Handle));
}

OCInterface_CopyTool::OCInterface_CopyTool(OCNaroWrappers::OCInterface_InterfaceModel^ amodel) 
{
  nativeHandle = new Interface_CopyTool(*((Handle_Interface_InterfaceModel*)amodel->Handle));
}

OCInterface_InterfaceModel^ OCInterface_CopyTool::Model()
{
  Handle(Interface_InterfaceModel) tmp = ((Interface_CopyTool*)nativeHandle)->Model();
  return gcnew OCInterface_InterfaceModel(&tmp);
}

 void OCInterface_CopyTool::SetControl(OCNaroWrappers::OCInterface_CopyControl^ othermap)
{
  ((Interface_CopyTool*)nativeHandle)->SetControl(*((Handle_Interface_CopyControl*)othermap->Handle));
}

OCInterface_CopyControl^ OCInterface_CopyTool::Control()
{
  Handle(Interface_CopyControl) tmp = ((Interface_CopyTool*)nativeHandle)->Control();
  return gcnew OCInterface_CopyControl(&tmp);
}

 void OCInterface_CopyTool::Clear()
{
  ((Interface_CopyTool*)nativeHandle)->Clear();
}

 System::Boolean OCInterface_CopyTool::Copy(OCNaroWrappers::OCStandard_Transient^ entfrom, OCNaroWrappers::OCStandard_Transient^ entto, System::Boolean mapped, System::Boolean errstat)
{
  return OCConverter::StandardBooleanToBoolean(((Interface_CopyTool*)nativeHandle)->Copy(*((Handle_Standard_Transient*)entfrom->Handle), *((Handle_Standard_Transient*)entto->Handle), OCConverter::BooleanToStandardBoolean(mapped), OCConverter::BooleanToStandardBoolean(errstat)));
}

OCStandard_Transient^ OCInterface_CopyTool::Transferred(OCNaroWrappers::OCStandard_Transient^ ent)
{
  Handle(Standard_Transient) tmp = ((Interface_CopyTool*)nativeHandle)->Transferred(*((Handle_Standard_Transient*)ent->Handle));
  return gcnew OCStandard_Transient(&tmp);
}

 void OCInterface_CopyTool::Bind(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCStandard_Transient^ res)
{
  ((Interface_CopyTool*)nativeHandle)->Bind(*((Handle_Standard_Transient*)ent->Handle), *((Handle_Standard_Transient*)res->Handle));
}

 System::Boolean OCInterface_CopyTool::Search(OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCStandard_Transient^ res)
{
  return OCConverter::StandardBooleanToBoolean(((Interface_CopyTool*)nativeHandle)->Search(*((Handle_Standard_Transient*)ent->Handle), *((Handle_Standard_Transient*)res->Handle)));
}

 void OCInterface_CopyTool::ClearLastFlags()
{
  ((Interface_CopyTool*)nativeHandle)->ClearLastFlags();
}

 Standard_Integer OCInterface_CopyTool::LastCopiedAfter(Standard_Integer numfrom, OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCStandard_Transient^ res)
{
  return ((Interface_CopyTool*)nativeHandle)->LastCopiedAfter(numfrom, *((Handle_Standard_Transient*)ent->Handle), *((Handle_Standard_Transient*)res->Handle));
}

 void OCInterface_CopyTool::TransferEntity(OCNaroWrappers::OCStandard_Transient^ ent)
{
  ((Interface_CopyTool*)nativeHandle)->TransferEntity(*((Handle_Standard_Transient*)ent->Handle));
}

 void OCInterface_CopyTool::RenewImpliedRefs()
{
  ((Interface_CopyTool*)nativeHandle)->RenewImpliedRefs();
}

 void OCInterface_CopyTool::FillModel(OCNaroWrappers::OCInterface_InterfaceModel^ bmodel)
{
  ((Interface_CopyTool*)nativeHandle)->FillModel(*((Handle_Interface_InterfaceModel*)bmodel->Handle));
}

OCInterface_EntityIterator^ OCInterface_CopyTool::CompleteResult(System::Boolean withreports)
{
  Interface_EntityIterator* tmp = new Interface_EntityIterator();
  *tmp = ((Interface_CopyTool*)nativeHandle)->CompleteResult(OCConverter::BooleanToStandardBoolean(withreports));
  return gcnew OCInterface_EntityIterator(tmp);
}

OCInterface_EntityIterator^ OCInterface_CopyTool::RootResult(System::Boolean withreports)
{
  Interface_EntityIterator* tmp = new Interface_EntityIterator();
  *tmp = ((Interface_CopyTool*)nativeHandle)->RootResult(OCConverter::BooleanToStandardBoolean(withreports));
  return gcnew OCInterface_EntityIterator(tmp);
}

 void OCInterface_CopyTool::Destroy()
{
  ((Interface_CopyTool*)nativeHandle)->Destroy();
}

