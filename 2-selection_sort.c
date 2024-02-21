#include "sort.h"

/**
	* selection_sort - void func
	* Description: sorts by finding the min
	* @array: list if integers
	* @size: size of array
	*/
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	int min = 0;
	int holder = 0;
	size_t j = 0;
	int index = 0;

	if (size == 0)
		return;
	if (array == NULL)
		return;
	if (array != NULL)
		min = array[0];
	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		index = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				index = j;
			}
		}
		holder = array[i];
		array[i] = array[index];
		array[index] = holder;
		print_array(array, size);
	}
}
