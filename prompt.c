#include "main.h"

/**
 * prompt - Display shell prompt
 *
 * Return: void
 */
void prompt(void)
{
	PRINTER("$ ");
}

/**
 * print_error - Display error besed on shell loops
 *
 * @input:User Input
 * @counter:Simple Shell Count Loop
 * @argv:Program Name
 *
 * Return: Void
 */
void print_error(char *input, int counter, char **argv)
{
	char *er;

	PRINTER(argv[0]);
	PRINTER(": ");
	er = _itoa(counter);
	PRINTER(er);
	free(er);
	PRINTER(": ");
	PRINTER(input);
	PRINTER(": not found\n");
}

