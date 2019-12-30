#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len)
{
    char *destination = dst;
    const char *source = src;
    char *temp = (char *)malloc(sizeof(char) * len);
    size_t save = 0;

    if (!temp)
        return NULL;
    else
    {
        for (save = 0; save < len; save++)
            *(temp + save) = *(source + save);
        for (save = 0; save < len; save++)
            *(destination + save) = *(temp + save);
        free(temp);
    }
    return (void *)destination;
}
