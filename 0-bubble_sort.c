#include "sort.h"

/**
	* bubble_sort - void func
	* Description: sorts using bubble sort
	* @size: size of array
	* @array: passed int array
	*/
void bubble_sort(int *array, size_t size)
{
	int *int_array = array;
	size_t i = 0;
	int sortflag = 0;
	int curr = 0;

	if (int_array == NULL)
		return;
	if (size <= 1)
		return;
	while (sortflag == 0)
	{
		sortflag = 1;
		for (i = 0; i < size - 1; i++)
		{
			curr = int_array[i];
			if (curr > int_array[i + 1])
			{
				int_array[i] = int_array[i + 1];
				int_array[i + 1] = curr;
				sortflag = 0;
				print_array(int_array, size);
			}
		}
	}
}
