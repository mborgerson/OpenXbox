#include "common.h"

/*
 * RtlZeroMemory
 *
 * Import Number:      320
 * Calling Convention: stdcall
 * Parameter 0:        PVOID  Destination
 * Parameter 1:        SIZE_T Length
 * Return Type:        VOID
 */
int Xbox::RtlZeroMemory()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_PTR(VOID,   Destination);
	K_INIT_ARG_VAL(SIZE_T, Length);

	memset(pDestination, 0, Length);

	K_EXIT();
	return KF_OK;
}
