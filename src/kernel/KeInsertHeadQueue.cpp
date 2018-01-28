#include "common.h"

/*
 * KeInsertHeadQueue
 *
 * Import Number:      116
 * Calling Convention: stdcall
 * Parameter 0:        PRKQUEUE    Queue
 * Parameter 1:        PLIST_ENTRY Entry
 * Return Type:        LONG
 */
int Xbox::KeInsertHeadQueue()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_RPT(KQUEUE,     Queue);
	K_INIT_ARG_PTR(LIST_ENTRY, Entry);
	XboxTypes::LONG rval;

	K_EXIT_WITH_VALUE(rval);
	return KF_ERROR_NOT_IMPLEMENTED;
}
