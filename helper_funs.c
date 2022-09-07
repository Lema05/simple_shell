#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 *
 * @s: The string
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}

/**
 * _puts - print string to standart out
 *
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

/**
 * _itoa - function that converts an integer to char
 *
 * @n: the integer
 *
 * Return: pointer to the char
 */
char *_itoa(unsigned int n)
{
	int len = 0, i = 0;
	char *s;

	len = intlen(n);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	*s = '\0';
	while (n / 10)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	s[i] = (n % 10) + '0';
	array_rev(s, len);
	s[i + 1] = '\0';
	return (s);
}

/**
 * signal_to_handle - Handle ^C
 * @sig:Captured Signal
 * Return: Void
 */
void signal_to_handle(int sig)
{
	if (sig == SIGINT)
	{
		PRINTER("\n$ ");
	}
}

