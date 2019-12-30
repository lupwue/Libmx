#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    register const char *p1 = s1;
    register const char *p2 = s2;

    if (n != 0) 
		while (--n)
			if (*p1++ != *p2++)
				return (*--p1 - *--p2);
	return 0;
}
