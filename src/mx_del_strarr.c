#include "libmx.h"

void mx_del_strarr(char ***arr)
{
	if (arr != NULL && *arr != NULL)
	{
		for (int i = 0; (*arr)[i]; i++)
		{
			mx_strdel(&(*arr)[i]);
			(*arr)[i] = NULL;
		}
		free(*arr);
		*arr = NULL;
	}
}
