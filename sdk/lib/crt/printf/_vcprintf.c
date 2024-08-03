/*
 * COPYRIGHT:       GNU GPL, see /docs/licenses/COPYING
 * PROJECT:         ReactOS crt library
 * FILE:            lib/sdk/crt/printf/_vcprintf.c
 * PURPOSE:         Implementation of _vcprintf
 * PROGRAMMER:      Samuel Serapi�n
 */

#include <stdio.h>
#include <stdarg.h>

int
__cdecl
_vcprintf(const char* format, va_list va)
{
    return vfprintf(stdout, format, va);
}
