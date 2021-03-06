// File generated by CPPExt (Enum)

#ifndef _AIS_TypeOfIso_OCWrappers_HeaderFile
#define _AIS_TypeOfIso_OCWrappers_HeaderFile

namespace OCNaroWrappers
{

//! Gives the status of connection of an Interactive <br>
//! Object. This will be one of the following: <br>
//! -   No connection <br>
//! -   Connection <br>
//! -   Transformation <br>
//! -   Both connection and transformation <br>
//!   This enumeration is used in <br>
//! AIS_ConnectedInteractive. Transform indicates <br>
//! that the Interactive Object reference geometry has <br>
//! changed location relative to the reference geometry. <br>
public enum class OCAIS_TypeOfIso
{ 
 AIS_TOI_IsoU,
AIS_TOI_IsoV,
AIS_TOI_Both
};

}; // OCNaroWrappers

#endif
