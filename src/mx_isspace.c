#include "libmx.h"

bool mx_isspace(char c) {
    if (c == '\n' || c == ' ' || c == '\t' || c == '\f' || c == '\n' 
        || c == '\r' || c == '\v')
        return 1;
    return 0;
}
