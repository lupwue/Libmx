#include "libmx.h"

void mx_swap_char(char *s1, char *s2)
{
	char temp;
	int i = 0;

	if (s1[i] && s2[i])
	{
		temp = s1[i];
		s1[i] = s2[i];
		s2[i] = temp;
	}
}
