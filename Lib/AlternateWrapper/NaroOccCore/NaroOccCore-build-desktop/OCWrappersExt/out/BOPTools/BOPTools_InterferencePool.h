// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_InterferencePool_OCWrappers_HeaderFile
#define _BOPTools_InterferencePool_OCWrappers_HeaderFile

// include native header
#include <BOPTools_InterferencePool.hxx>
#include "../Converter.h"


#include "BOPTools_CArray1OfInterferenceLine.h"
#include "BOPTools_CArray1OfSSInterference.h"
#include "BOPTools_CArray1OfESInterference.h"
#include "BOPTools_CArray1OfVSInterference.h"
#include "BOPTools_CArray1OfEEInterference.h"
#include "BOPTools_CArray1OfVEInterference.h"
#include "BOPTools_CArray1OfVVInterference.h"
#include "../BooleanOperations/BooleanOperations_KindOfInterference.h"


namespace OCNaroWrappers
{

ref class OCBooleanOperations_ShapesDataStructure;
ref class OCBOPTools_CArray1OfInterferenceLine;
ref class OCBOPTools_CArray1OfSSInterference;
ref class OCBOPTools_CArray1OfESInterference;
ref class OCBOPTools_CArray1OfVSInterference;
ref class OCBOPTools_CArray1OfEEInterference;
ref class OCBOPTools_CArray1OfVEInterference;
ref class OCBOPTools_CArray1OfVVInterference;



//!  Class for storing information about <br>
//! results of all interferences for all shapes <br>
public ref class OCBOPTools_InterferencePool  {

protected:
  BOPTools_InterferencePool* nativeHandle;
  OCBOPTools_InterferencePool(OCDummy^) {};

public:
  property BOPTools_InterferencePool* Handle
  {
    BOPTools_InterferencePool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_InterferencePool(BOPTools_InterferencePool* nativeHandle);

// Methods PUBLIC


//! Empty constructor <br>
OCBOPTools_InterferencePool();


//! Constructor <br>
OCBOPTools_InterferencePool(OCNaroWrappers::OCBooleanOperations_ShapesDataStructure^ aDS);


//! Modifier <br>
 /*instead*/  void SetDS(OCNaroWrappers::OCBooleanOperations_ShapesDataStructure^ aDS) ;


//! Selector <br>
 /*instead*/  BooleanOperations_PShapesDataStructure DS() ;


//! Returns  TRUE if the shape with DS_index  <anInd> <br>
//! has at least one  interference with non-empty result <br>
 /*instead*/  System::Boolean HasInterference(Standard_Integer anInd) ;


//! Returns  TRUE if the interference between shapes <br>
//! <anInd1> and <anInd2> has already been computed. <br>
 /*instead*/  System::Boolean IsComputed(Standard_Integer anInd1, Standard_Integer anInd2) ;


//! Sorts types of shapes <anInd1> and <anInd2> in increasing order <br>
 /*instead*/  void SortTypes(Standard_Integer& anInd1, Standard_Integer& anInd2) ;


//! Gets the type of interference in accordance with the types of <br>
//! shapes  <anInd1> and <anInd2> <br>
 /*instead*/  OCBooleanOperations_KindOfInterference InterferenceType(Standard_Integer anInd1, Standard_Integer anInd2) ;


//! Adds the info about interference in InterferenceLine-s for <br>
//! shapes  <anInd1> and <anInd2> <br>
 /*instead*/  void AddInterference(Standard_Integer anInd1, Standard_Integer anInd2, OCBooleanOperations_KindOfInterference aType, Standard_Integer anIndex) ;


//! Returns the reference to complete array of interference line-s <br>
 /*instead*/  OCBOPTools_CArray1OfInterferenceLine^ InterferenceTable() ;


//! Returns the reference to array Of F/F interferences <br>
 /*instead*/  OCBOPTools_CArray1OfSSInterference^ SSInterferences() ;


//! Returns the reference to array Of E/F interferences <br>
 /*instead*/  OCBOPTools_CArray1OfESInterference^ ESInterferences() ;


//! Returns the reference to array Of V/F interferences <br>
 /*instead*/  OCBOPTools_CArray1OfVSInterference^ VSInterferences() ;


//! Returns the reference to arrray Of E/E interferences <br>
 /*instead*/  OCBOPTools_CArray1OfEEInterference^ EEInterferences() ;


//! Returns the reference to arrray Of  V/E interferences <br>
 /*instead*/  OCBOPTools_CArray1OfVEInterference^ VEInterferences() ;


//! Returns the reference to arrray Of  V/V interferences <br>
 /*instead*/  OCBOPTools_CArray1OfVVInterference^ VVInterferences() ;


 /*instead*/  OCBOPTools_CArray1OfSSInterference^ SSInterfs() ;


 /*instead*/  OCBOPTools_CArray1OfESInterference^ ESInterfs() ;


 /*instead*/  OCBOPTools_CArray1OfVSInterference^ VSInterfs() ;


 /*instead*/  OCBOPTools_CArray1OfEEInterference^ EEInterfs() ;


 /*instead*/  OCBOPTools_CArray1OfVEInterference^ VEInterfs() ;


 /*instead*/  OCBOPTools_CArray1OfVVInterference^ VVInterfs() ;


 /*instead*/  BOPTools_PShapeShapeInterference GetInterference(Standard_Integer anIndex, OCBooleanOperations_KindOfInterference aType) ;

~OCBOPTools_InterferencePool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
