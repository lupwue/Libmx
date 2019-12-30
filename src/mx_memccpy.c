#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, 
                size_t n) {
    char *destination=(char*)dst;
    const char *source=(const char*)src;

    for (size_t i = 0; i < n; i++ )
    {
        destination[i]  = source[i];
        if (source[i] == '\0' )
            break;
        if (source[i] == c )
            return &destination[i+1];
    }
    return NULL; 
}
