#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - function that prints the string
 * @s: string to be printed
 * Return: number of characters printed
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
