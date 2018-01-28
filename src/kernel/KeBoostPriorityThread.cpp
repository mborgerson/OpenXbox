#include "common.h"

/*
 * KeBoostPriorityThread
 *
 * Import Number:      94
 * Calling Convention: stdcall
 * Parameter 0:        PKTHREAD  Thread
 * Parameter 1:        KPRIORITY Increment
 * Return Type:        VOID
 */
int Xbox::KeBoostPriorityThread()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_PTR(KTHREAD,   Thread);
	K_INIT_ARG_VAL(KPRIORITY, Increment);

	K_EXIT();
	return KF_ERROR_NOT_IMPLEMENTED;
}
