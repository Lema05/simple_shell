#include "main.h"

/**
 * _strncpy - A function that copies a string
 *
 * @dest: destination to copy string to
 * @src: source of string
 * @n: number of characters to copy
 *
 * Return: pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int length = 0;

	while (src[i++])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = length; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - determines the length of a string
 *
 * @s: a given string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}

/**
 * _strdup - Duplicate a string
 *
 * @str: The string
 *
 * Return: Pointer to duplicate String or NULL on fail
 */
char *_strdup(char *str)
{
	size_t len, i;
	char *str2;

	len = _strlen(str);
	str2 = malloc(sizeof(char) * (len + 1));
	if (!str2)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		str2[i] = str[i];
	}

	return (str2);
}
/**
 * _isalpha - Check if Alphabtic
 *@c: Character
 * Return: 1 If True 0 If Not
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	return (0);
}

