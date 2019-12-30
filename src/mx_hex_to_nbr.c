#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex)
{
	unsigned long number = 0;
	int i = mx_strlen(hex) - 1;
	int j = 0;
	int temp = 0;

	while (i >= 0) {
		if (hex[i] > 47 && hex[i] < 58) 
			temp = hex[i] - '0';
		if (hex[i] > 64 && hex[i] < 71) 
			temp = hex[i] - 55;
		if (hex[i] > 96 && hex[i] < 103) 
			temp = hex[i] - 87;
		number += temp * mx_pow(16, j);
		i--;
		j++;
	}
	return number;
}
