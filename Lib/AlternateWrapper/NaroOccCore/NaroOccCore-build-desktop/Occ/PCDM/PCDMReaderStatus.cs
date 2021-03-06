namespace NaroCppCore.Occ.PCDM
{
	public enum PCDMReaderStatus{
		PCDM_RS_OK,
		PCDM_RS_NoDriver,
		PCDM_RS_UnknownFileDriver,
		PCDM_RS_OpenError,
		PCDM_RS_NoVersion,
		PCDM_RS_NoSchema,
		PCDM_RS_NoDocument,
		PCDM_RS_ExtensionFailure,
		PCDM_RS_WrongStreamMode,
		PCDM_RS_FormatFailure,
		PCDM_RS_TypeFailure,
		PCDM_RS_TypeNotFoundInSchema,
		PCDM_RS_UnrecognizedFileFormat,
		PCDM_RS_MakeFailure,
		PCDM_RS_PermissionDenied,
		PCDM_RS_DriverFailure,
		PCDM_RS_AlreadyRetrievedAndModified,
		PCDM_RS_AlreadyRetrieved,
		PCDM_RS_UnknownDocument,
		PCDM_RS_WrongResource,
		PCDM_RS_NoModel,
	}
}
