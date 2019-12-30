#include "libmx.h"

void *mx_memset(void *b, int c, size_t len)
{
    unsigned char *dest = b;

    while (len--)
    {
        *dest++ = c;
    }
    return b;
}
