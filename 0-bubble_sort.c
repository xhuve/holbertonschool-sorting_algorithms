#include <stdio.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, swapped = 0;

	do
	{
		swapped = 1;
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 0;
			}
			print_array(array, size);
		}
	}
	while (swapped == 0);
}
