#include "main.h"

/**
 * leet - encodes a string
 * @s: string to encode
 * Return :address of s
 */
char *leet(char *s)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (str[i] ==c[j])
			{
				str[i] == n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}

