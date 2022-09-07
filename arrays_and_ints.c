#include "main.h"

/**
 * array_rev - Function to reverse array
 *
 * @arr: The arrat
 * @len: length of the array
 *
 * Return: Void
 */
void array_rev(char *arr, int len)
{
	int i;
	char tmp;

	for (i = 0; i < (len / 2); i++)
	{
		tmp = arr[i];
		arr[i] = arr[(len - 1) - i];
		arr[(len - 1) - i] = tmp;
	}
}

/**
 * intlen - Function to get length of int
 *
 * @num: The int
 *
 * Return: Length of int
 */
int intlen(int num)
{
	int len = 0;

	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}
