#include "sort.h"
/**
 * selection_sort - Selection sort of array integers algorithm
 * @size: array size
 * @array: an array to sort
 */
void selection_sort(int *array, size_t size)
{
	size_t a, index;
	int tmp, ret, val = 0;

	if (array == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		tmp = a;
		val = 0;
		for (index = a + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				val += 1;
			}
		}
		ret = array[a];
		array[a] = array[tmp];
		array[tmp] = ret;
		if (val != 0)
			print_array(array, size);
	}
}
