#include "libmx.h"

void mx_sort_same_len(char **arr) {
    for (int check = 0; arr[check] && arr[check + 1] != '\0'; check++) {
        if (mx_strlen(arr[check]) == mx_strlen(arr[check + 1])) 
            if (mx_strcmp(arr[check], arr[check + 1]) )
                mx_swap_str(arr, check, (check + 1));
    }
}
