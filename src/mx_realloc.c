#include "libmx.h"

void *mx_realloc(void *ptr, size_t size)
{
    void *result = ptr;

    if (!ptr)
        result = malloc(size);
    if (malloc_size(ptr) < size) {
        result = malloc(size);
        mx_memcpy(result, ptr, malloc_size(ptr));
        free(ptr);
    }
    else
        result = ptr;
    return result;
}
