#include "common.h"

/*
 * NtSetEvent
 *
 * Import Number:      225
 * Calling Convention: stdcall
 * Parameter 0:        HANDLE EventHandle
 * Parameter 1:        PLONG  PreviousState
 * Return Type:        NTSTATUS
 */
int Xbox::NtSetEvent()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_VAL(HANDLE, EventHandle);
	K_INIT_ARG_PTR(LONG,   PreviousState);
	XboxTypes::NTSTATUS rval;

	K_EXIT_WITH_VALUE(rval);
	return KF_ERROR_NOT_IMPLEMENTED;
}
