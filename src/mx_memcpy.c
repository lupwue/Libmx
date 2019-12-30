#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *destination = (char *)dst;
    const char *source = (char *)src;

    for (int i = 0; i < (int)n; i++) 
        *destination++ = *source++;
   return (void *)destination;
}
