#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: Size of the array
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int temp_swap, flag = 0;

	if (array == NULL || size == 0)
		return;

	for (; i < size - 1; i++)
	{
		for (; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp_swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp_swap;

				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
