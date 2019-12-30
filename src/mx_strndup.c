#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    size_t s_len = (size_t)mx_strlen(s1);
    char *newstr;
    int len;

    len = s_len < n ? s_len : n;
    newstr = (char *) malloc (len + 1);
    if (!s1 || !newstr)
        return NULL;
    if (newstr) {
            mx_memcpy (newstr, s1, len);
            newstr[len] = '\0';
    }
    return (char *) newstr;
}
