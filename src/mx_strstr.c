#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle)
{
    while (*haystack)
    {
        if (mx_strcompare(haystack, needle) == 0)
            return (char *)haystack;
        haystack++;
    }
    return NULL;
}
