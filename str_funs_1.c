#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * _strcpy - copies strings to a buffer
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

/**
 * _strcat - this function concatenates 2 strings
 *
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *point;
	int length;

	for (length = 0; dest[length] != '\0'; length++)
		;
	point = dest + length;
	while (*src != '\0')
	{
		*point++ = *src++;
	}
	*point = '\0';
	return (dest);
}

/**
 * _strchr - locates a character in a string
 *
 * @s: string of characters to check
 * @c: the character to locate
 *
 * Return: pointer to first occurence of c or NULL if not present
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
/**
 * _strncmp - Compare n characters of 2 strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: number of characters to compare.
 *
 * Return: 1 on success otherwise 0
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (s1 == NULL)
		return (-1);
	for (i = 0; i < n && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}

