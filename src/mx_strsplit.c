#include "libmx.h"

char **mx_strsplit(const char *s, char c)
{
    char **arr = mx_mem_two_dim(s, c);
    int i = 0;

    if (s && arr) {
        for (int count = 0; s[count]; count++)
        {
            if (s[count] != c)
            {
                for (int j = 0; s[count] != c && s[count]; count++, j++)
                    arr[i][j] = s[count];
                i++;
            }
        }
        arr[i] = NULL;
    }
    return (!s) ? NULL : arr;
}
