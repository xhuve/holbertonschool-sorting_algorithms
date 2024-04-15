#include <stdio.h>
#include "sort.h"

/**
*
*
*/
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
*
*
*/
int partition(int *arr, int lo, int hi, size_t size)
{
	int pivot, i, j;

	pivot = arr[hi];
	i = lo - 1;

	for (j = lo; j < hi; j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	if (arr[hi] < arr[i + 1])
	{
		swap(&arr[i + 1], &arr[hi]);
		print_array(arr, size);
	}
	return i + 1;
}

void rec_quick_sort(int *arr, int lo, int hi, size_t size)
{
	int p_idx;

	if (lo < hi)
	{
		p_idx = partition(arr, lo, hi, size);
	
		rec_quick_sort(arr, lo, p_idx - 1, size);
		rec_quick_sort(arr, p_idx + 1, hi, size);
	}
	
}

/**
* quick_sort - check code
*
* @array: pointer to array of int
* @size: size
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	rec_quick_sort(array, 0, size - 1, size);
}


