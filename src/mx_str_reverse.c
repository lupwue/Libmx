#include "libmx.h"

void mx_str_reverse(char *s) {
	char temp;
	int i;
	int j;

	for (j = 0, i = mx_strlen(s) - 1; j < i; j++, i--) {
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}
