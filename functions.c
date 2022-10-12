#include "main.h"
/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 * Return: 1 if success
 * * error : -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Function that print a string
 * @s: string to be printed
 * Return: numbers of characters printed
 */

int _puts(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += _putchar(*s);
		s++;
	}
		return (count);
}
