#include "common.h"

/*
 * DbgPrompt
 *
 * Import Number:      10
 * Calling Convention: stdcall
 * Parameter 0:        PCH   Prompt
 * Parameter 1:        PCH   Response
 * Parameter 2:        ULONG MaximumResponseLength
 * Return Type:        ULONG
 */
int Xbox::DbgPrompt()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_PTR(CH,    Prompt);
	K_INIT_ARG_PTR(CH,    Response);
	K_INIT_ARG_VAL(ULONG, MaximumResponseLength);
	XboxTypes::ULONG rval;

	K_EXIT_WITH_VALUE(rval);
	return KF_ERROR_NOT_IMPLEMENTED;
}
