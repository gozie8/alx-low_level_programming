#include <stdio.h>
#include "main.h"
/**
 * print_array -function that prints n elements of an array of
 * integers, followed by a new line.
 * @a: Array
 * @n: size
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
  19 changes: 19 additions & 0 deletions19  
0x05-pointers_arrays_strings/9-strcpy.c
@@ -0,0 +1,19 @@
#include "main.h"
/**
 * *_strcpy -function that prints the copies of the string
 * @dest: 1st argument
 * @src: 2nd argument
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		*(dest + l) = *(src + l);
	}
	*(dest + l) = '\0';
	return (dest);
}
