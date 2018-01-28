#include "common.h"

/*
 * NtWriteFileGather
 *
 * Import Number:      237
 * Calling Convention: stdcall
 * Parameter 0:        HANDLE                FileHandle
 * Parameter 1:        HANDLE                Event
 * Parameter 2:        PIO_APC_ROUTINE       ApcRoutine
 * Parameter 3:        PVOID                 ApcContext
 * Parameter 4:        PIO_STATUS_BLOCK      IoStatusBlock
 * Parameter 5:        PFILE_SEGMENT_ELEMENT SegmentArray
 * Parameter 6:        ULONG                 Length
 * Parameter 7:        PLARGE_INTEGER        ByteOffset
 * Return Type:        BOOLEAN
 */
int Xbox::NtWriteFileGather()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_VAL(HANDLE,               FileHandle);
	K_INIT_ARG_VAL(HANDLE,               Event);
	K_INIT_ARG_VAL(PIO_APC_ROUTINE,      ApcRoutine);
	K_INIT_ARG_PTR(VOID,                 ApcContext);
	K_INIT_ARG_PTR(IO_STATUS_BLOCK,      IoStatusBlock);
	K_INIT_ARG_PTR(FILE_SEGMENT_ELEMENT, SegmentArray);
	K_INIT_ARG_VAL(ULONG,                Length);
	K_INIT_ARG_PTR(LARGE_INTEGER,        ByteOffset);
	XboxTypes::BOOLEAN rval;

	K_EXIT_WITH_VALUE(rval);
	return KF_ERROR_NOT_IMPLEMENTED;
}
