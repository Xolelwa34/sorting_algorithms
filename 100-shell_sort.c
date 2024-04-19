#include "sort.h"
/**
 * shell_sort -  Sorting aray of integers in ascending
 * order using shell algorithm.
 * @array: array element
 * @size: array size
 **/
void shell_sort(int *array, size_t size)
{
	size_t val[1000], ret = 0, a = 0, i;
	int n, a2;

	if (!array)
		return;
	while (a * 3 + 1 < size)
	{
		val[ret] = a * 3 + 1;
		a = val[ret++];
	}
	for (i = 0; i < ret; i++)
	{
		for (a = 0; a < size; a++)
		{
			if ((a + val[ret - i - 1]) > size - 1)
				break;
			a2 = a;
			while (array[a2] > array[a2 + val[ret - i - 1]])
			{
				n = array[a2];
				arraya[a2] =  array[a2 + val[ret - i - 1]];
				array[a2 + val[ret - i - 1]] = n;
				a2 = a2 - val[ret - i - 1];
				if (a2 < 0)
					break;
			}
		}
		print_array(array, size);
	}
}
