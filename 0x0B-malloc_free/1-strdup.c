#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - it copy
 * @str: poiter to string
 * Return: pinter to a new string
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, k;

	if (!str)
		return (NULL);
	while (*(str + i))
		i++;
	i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		s[k] = str[k];
	}
	return (s);
}
