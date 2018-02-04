#include "common.h"

/*
 * RtlAppendStringToString
 *
 * Import Number:      261
 * Calling Convention: stdcall
 * Parameter 0:        PSTRING Destination
 * Parameter 1:        PSTRING Source
 * Return Type:        NTSTATUS
 */
int Xbox::RtlAppendStringToString()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(PSTRING, Destination);
	K_INIT_ARG(PSTRING, Source);
	XboxTypes::NTSTATUS rval;

	rval = m_kernel->RtlAppendStringToString(Destination, Source);

	K_EXIT_WITH_VALUE(rval);
	return KF_OK;
}
