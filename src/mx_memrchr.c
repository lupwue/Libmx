#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    const unsigned char *str = s;

    while (*str) 
        str++;
    str--;
    while(n-- != 0) {
        if (*str == c)
            return (void *)str;
        str--;
    }
    return NULL;
}
