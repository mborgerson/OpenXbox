#include "common.h"

/*
 * NtWaitForMultipleObjectsEx
 *
 * Import Number:      235
 * Calling Convention: stdcall
 * Parameter 0:        ULONG           Count
 * Parameter 1:        HANDLE          Handles
 * Parameter 2:        WAIT_TYPE       WaitType
 * Parameter 3:        KPROCESSOR_MODE WaitMode
 * Parameter 4:        BOOLEAN         Alertable
 * Parameter 5:        PLARGE_INTEGER  Timeout
 * Return Type:        NTSTATUS
 */
int Xbox::NtWaitForMultipleObjectsEx()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_VAL(ULONG,           Count);
	K_INIT_ARG_VAL(HANDLE,          Handles);
	K_INIT_ARG_VAL(WAIT_TYPE,       WaitType);
	K_INIT_ARG_VAL(KPROCESSOR_MODE, WaitMode);
	K_INIT_ARG_VAL(BOOLEAN,         Alertable);
	K_INIT_ARG_PTR(LARGE_INTEGER,   Timeout);
	XboxTypes::NTSTATUS rval;

	K_EXIT_WITH_VALUE(rval);
	return KF_ERROR_NOT_IMPLEMENTED;
}
