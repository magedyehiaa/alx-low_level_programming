#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - 3 arguments
 * @array: pointer
 * @size: int
 * @cmp: function pointer M e G oOoOo
 *
 * Description: searches for an integer
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (m = 0; m < size; m++)
		{
			cmp(array[m]);
			if (cmp(array[m]) == 1)
			{
				return (m);
			}
		}
	}
	return (-1);
}
