#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
        va_list args;
        int char_count = 0;

        va_start(args, format);

        while (*format)
        {
                if (*format != '%')
                {
                        /* Print regular character */
                        write(1, format, 1);
                        char_count++;
                }
                else
                {
                        format++; /* Move to the next character after '%' */

                        /* Handle format specifiers */
                        switch (*format)
                        {
                                case 'c':
                                        print_char(args, &char_count);
                                        break;
                                case 's':
                                        print_string(args, &char_count);
                                        break;
                                case '%':
                                        print_percent(&char_count);
                                        break;
                        }
                }
                format++;
        }
        va_end(args);
        return (char_count);
}
