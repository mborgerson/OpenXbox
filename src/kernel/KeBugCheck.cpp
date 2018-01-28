#include "common.h"

/*
 * KeBugCheck
 *
 * Import Number:      95
 * Calling Convention: stdcall
 * Parameter 0:        ULONG BugCheckCode
 * Return Type:        VOID
 */
int Xbox::KeBugCheck()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_VAL(ULONG, BugCheckCode);

	K_EXIT();
	return KF_ERROR_NOT_IMPLEMENTED;
}
