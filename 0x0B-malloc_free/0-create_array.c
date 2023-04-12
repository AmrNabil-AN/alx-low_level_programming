#include "main.h"
#include <stdio.h>

/**
 * create_array - creat array of chars
 * @size: size of array
 * @c: char
 * Return: null
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}