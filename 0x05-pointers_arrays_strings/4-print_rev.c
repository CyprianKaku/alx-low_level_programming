#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_rev - Prints a string in reverse
* @s: The string to be printed
*/

void print_rev(char *s)
{
int len = 0, index = 0;
len = _strlen(str);

for (index = len - 1; index >= 0; index--)
_putchar(s[index]);

_putchar(10);
}

/**
*_strlen - returns the length of a string
* @s: string
* Return: returns length;
*/
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}

