#include "libmx.h"

void mx_printstr(const char *s) {
	while(*s)
		mx_printchar(*s++);
}
