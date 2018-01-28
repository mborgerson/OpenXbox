#include "common.h"

/*
 * RtlGetCallersAddress
 *
 * Import Number:      288
 * Calling Convention: stdcall
 * Parameter 0:        PPVOID CallersAddress
 * Parameter 1:        PPVOID CallersCaller
 * Return Type:        VOID
 */
int Xbox::RtlGetCallersAddress()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_PTR(PVOID, CallersAddress);
	K_INIT_ARG_PTR(PVOID, CallersCaller);

	K_EXIT();
	return KF_ERROR_NOT_IMPLEMENTED;
}
