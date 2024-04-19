#include "sort.h"
/**
  * Quick_sort - Quick sort algorithm function
  * @array: an array to sort
  * @size: size of an array
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	algo_s(array, 0, size - 1, size);
}

/**
  * algo_s - the recursive algorithm sort
  * @ary: array
  * @l: l used index
  * @r: r used index
  * @size: size of an array
  */
void algo_s(int *ary, int l, int r, size_t size)
{
	int pivot;

	if (l < r)
	{
		pivot = separate(ary, l, r, size);
		algo_s(ary, l, pivot - 1, size);
		algo_s(ary, pivot + 1, r, size);
	}
}

/**
  * separate - separation of arrays
  * @ary: an array
  * @l: l used index
  * @r: r used index
  * @size: size of an array
  * Return: pivot idx
  */
int separate(int *ary, int l, int r, size_t size)
{
	int i, a, pivot, tmp;

	pivot = ary[r];
	i = l;

	for (a = l; a < r; a++)
	{
		if (ary[a] < pivot)
		{
			if (i != a)
			{
				tmp = ary[a];
				ary[a] = ary[i];
				ary[i] = tmp;
				print_array(ary, size);
			}
			i++;
		}
	}
	if (ary[i] != ary[r])
	{
		tmp = ary[i];
		ary[i] = ary[r];
		ary[r] = tmp;
		print_array(ary, size);
	}

	return (i);
}
