// File generated by CPPExt (CPP file)
//

#include "StepGeom_OffsetSurface.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_Surface.h"


using namespace OCNaroWrappers;

OCStepGeom_OffsetSurface::OCStepGeom_OffsetSurface(StepGeom_OffsetSurface* nativeHandle) : OCStepGeom_Surface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_OffsetSurface::OCStepGeom_OffsetSurface() : OCStepGeom_Surface((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_OffsetSurface();
}

 void OCStepGeom_OffsetSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepGeom_OffsetSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepGeom_OffsetSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Surface^ aBasisSurface, Standard_Real aDistance, OCStepData_Logical aSelfIntersect)
{
  ((StepGeom_OffsetSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Surface*)aBasisSurface->Handle), aDistance, (StepData_Logical)aSelfIntersect);
}

 void OCStepGeom_OffsetSurface::SetBasisSurface(OCNaroWrappers::OCStepGeom_Surface^ aBasisSurface)
{
  ((StepGeom_OffsetSurface*)nativeHandle)->SetBasisSurface(*((StepGeom_Surface*)aBasisSurface->Handle));
}

OCStepGeom_Surface^ OCStepGeom_OffsetSurface::BasisSurface()
{
  StepGeom_Surface* tmp = new StepGeom_Surface();
  *tmp = ((StepGeom_OffsetSurface*)nativeHandle)->BasisSurface();
  return gcnew OCStepGeom_Surface(tmp);
}

 void OCStepGeom_OffsetSurface::SetDistance(Standard_Real aDistance)
{
  ((StepGeom_OffsetSurface*)nativeHandle)->SetDistance(aDistance);
}

 Standard_Real OCStepGeom_OffsetSurface::Distance()
{
  return ((StepGeom_OffsetSurface*)nativeHandle)->Distance();
}

 void OCStepGeom_OffsetSurface::SetSelfIntersect(OCStepData_Logical aSelfIntersect)
{
  ((StepGeom_OffsetSurface*)nativeHandle)->SetSelfIntersect((StepData_Logical)aSelfIntersect);
}

 OCStepData_Logical OCStepGeom_OffsetSurface::SelfIntersect()
{
  return (OCStepData_Logical)(((StepGeom_OffsetSurface*)nativeHandle)->SelfIntersect());
}

