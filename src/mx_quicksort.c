#include "libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    int first = left;
    int last = right;
    int swaps = 0;
    char *half = arr[(left + right) / 2];
    int middle = (left + right) / 2;

    if (first < last) {
        while (mx_strlen(arr[first]) < mx_strlen(half)) 
            first++;
        while (mx_strlen(half) < mx_strlen(arr[last])) 
            last--;
        if (first < last) {
            mx_swap_str(arr, first, last);
            swaps++;
        }
       swaps += mx_quicksort(arr, left, last);
       swaps += mx_quicksort(arr, middle + 1, right);
    }
    return arr ? swaps  : -1;
}
