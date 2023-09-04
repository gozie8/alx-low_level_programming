#include "main.h"
/**
* _puts - prints a string, followed by a new line, to stdout
* @str: string to print
* _puts -function that prints a string, followed by a new line, to stdout.
* @str: 1st argument
*
*/
void _puts(char *str)
{
while (*str != '\10')
{
_putchar(*str++);
}
_putchar('\n');
int i = 0;

while (i > -1)
{
if (str[i] == '\0')
break;
_putchar(str[i]);
i++;
}
_putchar('\n');
}

