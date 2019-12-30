#include "libmx.h"

int mx_bubble_sort(char **arr, int size)
{
	char *temp;
	int swp = 0;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (mx_strcmp(arr[j], arr[j + 1]) > 0)
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				swp++;
			}
		}
	}
	return swp;
}
