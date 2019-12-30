#include "libmx.h"

int mx_get_count_number(int number)
{
    int i = 0;

    if (number < 0) 
        number *= -1;
    if (number == 0)
        i = 1;
    while (number >= 1) {
        number = number / 10;
        i++;
    }
    return i;
}
