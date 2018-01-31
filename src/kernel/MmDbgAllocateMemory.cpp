#include "common.h"

/*
 * MmDbgAllocateMemory
 *
 * Import Number:      374
 * Calling Convention: stdcall
 * Parameter 0:        SIZE_T NumberOfBytes
 * Parameter 1:        ULONG  Protect
 * Return Type:        PVOID
 */
int Xbox::MmDbgAllocateMemory()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(SIZE_T, NumberOfBytes);
	K_INIT_ARG(ULONG,  Protect);
	XboxTypes::PVOID rval;

	K_EXIT_WITH_VALUE(rval);
	return KF_ERROR_NOT_IMPLEMENTED;
}
