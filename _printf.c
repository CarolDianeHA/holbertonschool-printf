#include "main.h"
/**
 * _printf - Prints output according to format
 * @format: char string
 * Return: num of char printed
 */

int _printf(const char..*format, ...)
{
    int counter = 0;
    va_list args;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format != '%')
        {
            format++;
            continue;
        }
        format++;
        while (*format == ' ')
            format++;
        switch (*format)
        {
        case 'c':
            counter += _putchar(va_arg(args, int));
            break; 
        }
    }
    va_end(args);
    return (counter);
}
