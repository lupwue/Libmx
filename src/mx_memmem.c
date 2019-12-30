#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little,
                 size_t little_len) {
    const char *haystack = big;
    const char *needle = little;
    char *result;

    if (little_len == 0 || big_len == 0 || big_len < little_len)
        return NULL;
    result = mx_strstr(haystack, needle);
    return result ? (void *) result : NULL;
}
