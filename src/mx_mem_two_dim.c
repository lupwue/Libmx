#include "libmx.h"

char **mx_mem_two_dim(const char *s, char c) {
    int words = mx_count_words(s, c);
    char **arr = (char **)malloc(sizeof(char *) * (words + 1));
    int countsym = 0;

    for (int i = 0, j = 0; s[i]; i++) {
        if (s[i] != c) {
            for (countsym = 0; s[i] != c && s[i]; i++)   
                countsym++;
                arr[j++] = mx_strnew(countsym);
        }
    }
    return arr ? arr : NULL;
}
