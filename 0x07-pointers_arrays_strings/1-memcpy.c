#include "main.h"
/**
 * _memcpy - a function copies memory area
 * @dest: mem where is stored
 * @src: mem where is copied
 * @n: num of bytes
 *
 * Return: copied mem with n byte that changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
