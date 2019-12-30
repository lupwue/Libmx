#include "libmx.h"

char *mx_itoa(int number)
{
    int len = mx_get_count_number(number);
    char *s = mx_strnew(len + 1);
    char *n = "-";
    int a = number;

    if (number == -2147483648)
        return "-2147483648";
    if (number < 0)
        number *= -1;
    for (int i = 0; len--; i++) {
        s[i] = number % 10 + 48;
        number /= 10;
    }
    return (a < 0) ? mx_string_reverse(mx_strcat(s, n)) : mx_string_reverse(s);
}
