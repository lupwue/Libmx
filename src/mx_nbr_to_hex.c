#include "libmx.h" 

char *mx_nbr_to_hex(unsigned long int nbr) {
    char *hex = mx_strnew(mx_lenght_to_hex(nbr));
    long temp = nbr;

    for (int lenght = mx_lenght_to_hex(nbr) - 1; nbr != 0; lenght--) {
        temp = 0;
        temp = nbr % 16;
        if (temp < 10)
            hex[lenght] = temp + 48;
        else
            hex[lenght] = temp + 87;
        nbr /= 16;
    }
    return hex;
}
