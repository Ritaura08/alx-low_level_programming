#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 ^ Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int k, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = j = 0;

	while (s1[k] != '\0')
		k++;
	while (s2[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (k + s + 1));

	if (s == NULL)
		return (NULL);
	k = s = 0;

	while (s1[k] != '\0')
	{
		s[i] = s1[k];
		k++;
	}

	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		j++;
		s++;
	}
	s[i] = '\0';
	return (s);
}
