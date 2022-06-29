#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	vprintf(stderr, format, args);

	va_end(args);
}
