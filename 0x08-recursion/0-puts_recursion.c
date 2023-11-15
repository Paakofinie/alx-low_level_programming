#include "main.h"

/**
 * 0_puts_recursion - string gets Printed, following a new line
 * @s: string is printed
 */
void _puts_recursion(char *s);
{
	if(*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
