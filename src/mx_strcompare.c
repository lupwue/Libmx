#include "libmx.h"

int mx_strcompare(const char *s1, const char *s2)
{
    while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
            return 0;
        s1++;
        s2++;
    }
    return *s2;
}
