#include "main.h"

/**
 * _strlen - Returns length of string
 * @str: The string to get the length of
 *
 * Return: The length od @str
 */int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
