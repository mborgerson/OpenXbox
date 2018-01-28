#include "common.h"

/*
 * IoBuildAsynchronousFsdRequest
 *
 * Import Number:      60
 * Calling Convention: stdcall
 * Parameter 0:        ULONG            MajorFunction
 * Parameter 1:        PDEVICE_OBJECT   DeviceObject
 * Parameter 2:        PVOID            Buffer
 * Parameter 3:        ULONG            Length
 * Parameter 4:        PLARGE_INTEGER   StartingOffset
 * Parameter 5:        PIO_STATUS_BLOCK IoStatusBlock
 * Return Type:        PIRP
 */
int Xbox::IoBuildAsynchronousFsdRequest()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_VAL(ULONG,           MajorFunction);
	K_INIT_ARG_PTR(DEVICE_OBJECT,   DeviceObject);
	K_INIT_ARG_PTR(VOID,            Buffer);
	K_INIT_ARG_VAL(ULONG,           Length);
	K_INIT_ARG_PTR(LARGE_INTEGER,   StartingOffset);
	K_INIT_ARG_PTR(IO_STATUS_BLOCK, IoStatusBlock);
	XboxTypes::PIRP rval;

	K_EXIT_WITH_VALUE(rval);
	return KF_ERROR_NOT_IMPLEMENTED;
}
