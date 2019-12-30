#include "libmx.h"

int mx_lenght_to_hex(unsigned long int nbr) {
    int lenght = 0;

    while(nbr != 0) {
        nbr /= 16;
        lenght++;
    }
    return lenght;
}
