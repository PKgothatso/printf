#include "main.h"

/**
 * _strlen - length of the string is returned
 * @str: pointer that is a string
 * Return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlen - strlen function but used for constant char pointer str
 * @str: pointer that is a character
 * Return: 1
 */
int strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
		return (i);
}
