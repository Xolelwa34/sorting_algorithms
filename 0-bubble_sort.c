#include "sort.h"
/**
 * bubble_sort - swaps adjuscent elements if they are not in order and sort arrays
 * @array: array to sort
 * @size: size of an array
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, index, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (simple = 0; simple < size; simple++)
		{
			if (array[simple] > array[simple + 1] && array[simple + 1])
			{
			tmp = array[simple];
			array[simple] = array[simple + 1];
			array[simple + 1] = tmp;
			print_array(array, size);
			}
		}
}
