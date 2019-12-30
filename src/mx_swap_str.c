#include "libmx.h"

void mx_swap_str(char **arr, int first, int last) {
    char *temp;

    temp = arr[first];
	arr[first] = arr[last];
	arr[last] = temp;
}
