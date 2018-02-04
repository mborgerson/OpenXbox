#include "common.h"

/*
 * RtlFreeUnicodeString
 *
 * Import Number:      287
 * Calling Convention: stdcall
 * Parameter 0:        PUNICODE_STRING UnicodeString
 * Return Type:        VOID
 */
int Xbox::RtlFreeUnicodeString()
{
	K_ENTER_STDCALL();
	K_INIT_ARG(PUNICODE_STRING, UnicodeString);

	m_kernel->RtlFreeUnicodeString(UnicodeString);

	K_EXIT();
	return KF_OK;
}
