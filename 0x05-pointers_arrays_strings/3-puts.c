#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - prints a string to stdout
 * @str: the string to be printed
 *
 * Description: prints a string
 * On sucess: return the number of characters printed
 */

void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}

