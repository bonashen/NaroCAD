// File generated by CPPExt (CPP file)
//

#include "StdSelect_TextProjector2d.h"
#include "../Converter.h"
#include "../V2d/V2d_View.h"
#include "../gp/gp_Trsf2d.h"
#include "../gp/gp_Pnt2d.h"
#include "../TCollection/TCollection_ExtendedString.h"


using namespace OCNaroWrappers;

OCStdSelect_TextProjector2d::OCStdSelect_TextProjector2d(Handle(StdSelect_TextProjector2d)* nativeHandle) : OCSelect2D_Projector((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StdSelect_TextProjector2d(*nativeHandle);
}

OCStdSelect_TextProjector2d::OCStdSelect_TextProjector2d(OCNaroWrappers::OCV2d_View^ aView) : OCSelect2D_Projector((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StdSelect_TextProjector2d(new StdSelect_TextProjector2d(*((Handle_V2d_View*)aView->Handle)));
}

 void OCStdSelect_TextProjector2d::Set(OCNaroWrappers::OCV2d_View^ aView)
{
  (*((Handle_StdSelect_TextProjector2d*)nativeHandle))->Set(*((Handle_V2d_View*)aView->Handle));
}

 void OCStdSelect_TextProjector2d::Set(OCNaroWrappers::OCgp_Trsf2d^ atrsf)
{
  (*((Handle_StdSelect_TextProjector2d*)nativeHandle))->Set(*((gp_Trsf2d*)atrsf->Handle));
}

 void OCStdSelect_TextProjector2d::Convert(OCNaroWrappers::OCgp_Pnt2d^ aPointIn, OCNaroWrappers::OCgp_Pnt2d^ aPointOut)
{
  (*((Handle_StdSelect_TextProjector2d*)nativeHandle))->Convert(*((gp_Pnt2d*)aPointIn->Handle), *((gp_Pnt2d*)aPointOut->Handle));
}

 void OCStdSelect_TextProjector2d::Convert(OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_Real XPos, Standard_Real YPos, OCNaroWrappers::OCgp_Pnt2d^ MinPoint, OCNaroWrappers::OCgp_Pnt2d^ MaxPoint, Standard_Integer afont)
{
  (*((Handle_StdSelect_TextProjector2d*)nativeHandle))->Convert(*((TCollection_ExtendedString*)aText->Handle), XPos, YPos, *((gp_Pnt2d*)MinPoint->Handle), *((gp_Pnt2d*)MaxPoint->Handle), afont);
}


