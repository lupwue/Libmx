#include "libmx.h"

int mx_strnlen(const char *str, int maxlen) {
    int len;

    for (len = 0; len < maxlen; len++, str++) {
    }
    return len;
}
