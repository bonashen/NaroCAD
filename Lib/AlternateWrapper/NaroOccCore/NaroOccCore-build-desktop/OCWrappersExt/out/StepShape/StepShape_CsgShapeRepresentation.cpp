// File generated by CPPExt (CPP file)
//

#include "StepShape_CsgShapeRepresentation.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepShape_CsgShapeRepresentation::OCStepShape_CsgShapeRepresentation(StepShape_CsgShapeRepresentation* nativeHandle) : OCStepShape_ShapeRepresentation((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_CsgShapeRepresentation::OCStepShape_CsgShapeRepresentation() : OCStepShape_ShapeRepresentation((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_CsgShapeRepresentation();
}

