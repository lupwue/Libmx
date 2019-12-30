#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str = s;
    size_t length;

    for (length = 0; length < n; length++)
    {
        if (str[length] == c)
            return (void *)&str[length];
    }
    return NULL;
}
