#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Returns length of string
 * @str: string
 * Return: returns length;
 */
int _strlen(char *str)
{
	int count, inc;
       	inc = 0;
	for (count = 0; str[count] != '\0'; count++)
	inc++;

	return (inc);
}
