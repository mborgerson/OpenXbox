#include "common.h"

/*
 * KeReleaseMutant
 *
 * Import Number:      131
 * Calling Convention: stdcall
 * Parameter 0:        PRKMUTANT Mutant
 * Parameter 1:        KPRIORITY Increment
 * Parameter 2:        BOOLEAN   Abandoned
 * Parameter 3:        BOOLEAN   Wait
 * Return Type:        LONG
 */
int Xbox::KeReleaseMutant()
{
	K_ENTER_STDCALL();
	K_INIT_ARG_RPT(KMUTANT,   Mutant);
	K_INIT_ARG_VAL(KPRIORITY, Increment);
	K_INIT_ARG_VAL(BOOLEAN,   Abandoned);
	K_INIT_ARG_VAL(BOOLEAN,   Wait);
	XboxTypes::LONG rval;

	K_EXIT_WITH_VALUE(rval);
	return KF_ERROR_NOT_IMPLEMENTED;
}
