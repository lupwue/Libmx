#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace){
    int repeat = mx_count_substr(str, sub);
    int lenght; 
    char *newstr; 
    char *result;  

    if (!str || !sub || !replace)
        return NULL;
    lenght = mx_strlen(str) - repeat * mx_strlen(sub) \
                            + repeat * mx_strlen(replace);
    newstr = mx_strnew(lenght);
    result = newstr;
    while (repeat--) {
        mx_strncpy(newstr, str, mx_get_substr_index(str, sub));
        mx_strcpy(&newstr[mx_get_substr_index(str, sub)], replace);
        newstr += mx_get_substr_index(str, sub) + mx_strlen(replace);
        str += mx_get_substr_index(str, sub) + mx_strlen(sub);
    }
    mx_strcpy(newstr, str);
    return (!str || !sub || !replace) ? NULL : result;
}
