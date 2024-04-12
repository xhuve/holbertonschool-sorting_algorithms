#include <stdio.h>
#include "sort.h"

/**
* bubble_sort - check code
*
* @array: pointer to array of int
* @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, swapped = 0;

	do {
		swapped = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 0;
				print_array(array, size);
			}
		}
	} while (swapped == 0);
}
