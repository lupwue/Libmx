#include "libmx.h"

int mx_count_substr(const char *str, const char *sub)
{
    int count = 0;

    for (int i = 0; sub && str && str[i] && str[i] != '\0'
         && sub[0] != '\0'; i++)
        if (mx_strncmp(&str[i], sub, mx_strlen(sub)) == 0)
            count++;
    return (!str || !sub) ? -1 : count;
}
