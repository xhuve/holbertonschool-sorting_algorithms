#include <stdio.h>
#include "sort.h"

/**
* selection_sort - check code
*
* @array: pointer to array of int
* @size: size
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int swap, tmp;

	for (i = 0; i < size; i++)
	{
		swap = 0;
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
				swap = 1;
			}
			
		}
		if (swap == 1)
			{
				tmp = array[min];
				array[min] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
	}
}
