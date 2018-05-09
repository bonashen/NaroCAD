// File generated by CPPExt (CPP file)
//

#include "BOP_EdgeInfo.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Edge.h"


using namespace OCNaroWrappers;

OCBOP_EdgeInfo::OCBOP_EdgeInfo(BOP_EdgeInfo* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOP_EdgeInfo::OCBOP_EdgeInfo() 
{
  nativeHandle = new BOP_EdgeInfo();
}

 void OCBOP_EdgeInfo::SetEdge(OCNaroWrappers::OCTopoDS_Edge^ aE)
{
  ((BOP_EdgeInfo*)nativeHandle)->SetEdge(*((TopoDS_Edge*)aE->Handle));
}

 void OCBOP_EdgeInfo::SetPassed(System::Boolean aFlag)
{
  ((BOP_EdgeInfo*)nativeHandle)->SetPassed(OCConverter::BooleanToStandardBoolean(aFlag));
}

 void OCBOP_EdgeInfo::SetAngle(Standard_Real anAngle)
{
  ((BOP_EdgeInfo*)nativeHandle)->SetAngle(anAngle);
}

 void OCBOP_EdgeInfo::SetInFlag(System::Boolean aFlag)
{
  ((BOP_EdgeInfo*)nativeHandle)->SetInFlag(OCConverter::BooleanToStandardBoolean(aFlag));
}

OCTopoDS_Edge^ OCBOP_EdgeInfo::Edge()
{
  TopoDS_Edge* tmp = new TopoDS_Edge();
  *tmp = ((BOP_EdgeInfo*)nativeHandle)->Edge();
  return gcnew OCTopoDS_Edge(tmp);
}

 System::Boolean OCBOP_EdgeInfo::Passed()
{
  return OCConverter::StandardBooleanToBoolean(((BOP_EdgeInfo*)nativeHandle)->Passed());
}

 Standard_Real OCBOP_EdgeInfo::Angle()
{
  return ((BOP_EdgeInfo*)nativeHandle)->Angle();
}

 System::Boolean OCBOP_EdgeInfo::IsIn()
{
  return OCConverter::StandardBooleanToBoolean(((BOP_EdgeInfo*)nativeHandle)->IsIn());
}

