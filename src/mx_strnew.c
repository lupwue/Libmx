#include "libmx.h"

char *mx_strnew(const int size) {
    int i;
    char *str = (char *) malloc (size + 1);

	if(!str)
		return NULL;
	for(i = 0; i < size; i++)
		str[i] = '\0';
	str[size] = '\0';
	return str;
}
