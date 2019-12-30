#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int count = 0;
    int words = 0;

    for (int i = 0; str && str[i]; i++) { 
        if (str[i] == c)
            count = 0;
        else if (count == 0) {
            count = 1;
            words++;
        }
    }
    return str ? words : -1;
}
