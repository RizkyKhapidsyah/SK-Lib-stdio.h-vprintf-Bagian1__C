#pragma warning(disable:4996)

#include <stdio.h>
#include <stdarg.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2019
*/

void WriteFormatted(const char* format, ...) {
	va_list args;
	va_start(args, format);
	vprintf(format, args);
	va_end(args);
}

int main() {
	WriteFormatted("Call with %d variable argument.\n", 1);
	WriteFormatted("Call with %d variable %s.\n", 2, "arguments");

	_getch();
	return 0;
}