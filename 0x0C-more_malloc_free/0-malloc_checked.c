#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked -allocate memory using malloc
 * @b: number of bytes to allocate 
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsignedint b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == NULL)
		exist(98);
	return (ptr);
}
