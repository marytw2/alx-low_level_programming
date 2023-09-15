#include <stddef.h>
#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: array from which search is made
* @size: size of the array
* @cmp: function pointer
* Return: an integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size >= 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}

	}
	return (-1);
}
