#include "main.h"

/**
 * _strcpy - copy the string
 * @dest: char
 * @src: char
 * Description: Copy the string pointed to by pointer `src` to
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
