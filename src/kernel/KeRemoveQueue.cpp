#include "common.h"

/*
 * KeRemoveQueue
 *
 * Import Number:      136
 * Calling Convention: stdcall
 * Parameter 0:        PRKQUEUE        Queue
 * Parameter 1:        KPROCESSOR_MODE WaitMode
 * Parameter 2:        PLARGE_INTEGER  Timeout
 * Return Type:        PLIST_ENTRY
 */
int Xbox::KeRemoveQueue()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_RPT(KQUEUE,          Queue);
	K_INIT_ARG_VAL(KPROCESSOR_MODE, WaitMode);
	K_INIT_ARG_PTR(LARGE_INTEGER,   Timeout);
	XboxTypes::PLIST_ENTRY rval;

	K_EXIT_WITH_VALUE(rval);
	return KF_ERROR_NOT_IMPLEMENTED;
}
