#include "libmx.h"

static int how_much_spaces(const char *str) {
    int space = 0;

    for (int i = 0; str[i]; i++) {
        if (mx_isspace(str[i] == 1) && mx_isspace(str[i] == 1)) 
            space++;
    }
    return space;
}

char *mx_del_extra_spaces(const char *str) {
    char *trim = mx_strtrim(str);
    char *newstr = mx_strnew(mx_strlen(trim) - how_much_spaces(trim));

    if (str) {
        for (int i = 0, count = 0; i < mx_strlen(trim)  && trim[i]; ) {
            if (mx_isspace(trim[i]) == 1) {
               newstr[count++] = ' ';
               while (mx_isspace(trim[i]) == 1) 
                   i++;
            }
            newstr[count++] = trim[i++];
        }
        mx_strdel(&trim);
    }
    return str ? newstr : NULL;
}
