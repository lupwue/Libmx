#include "libmx.h"

char *mx_strtrim(const char *str) {
    int len = mx_strlen(str);
    int front;
    int back;
    char *result;

    if (str) {
        for (front = 0; str[front] && mx_isspace(str[front]) != 0; front++);
        for (back = len - 1; mx_isspace(str[back]) != 0; back--);
        result = mx_strnew(back - front + 1);
        for (int i = 0; front <= back; i++, front++)
            result[i] = str[front];
    }
    return !str ? NULL : result;
}
