#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub)
{
	char *subcheck;

    if (!str || !sub)
        return -2;
    subcheck = mx_strstr(str, sub);
    return subcheck ? (subcheck - str) : -1;
}
