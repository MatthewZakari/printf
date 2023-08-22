#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_string - Helper function to print a string
 * @args: The va_list containing the string argument
 * @char_count: Pointer to the character count
 */
void print_string(va_list args, int *char_count)
{
        char *str = va_arg(args, char *);
        int len = 0;

        if (str)
        {
                while (str[len])
                {
                        len++;
                }
                write(1, str, len);
                (*char_count) += len;
        }
        else
        {
                write(1, "(null)", 6);
                (*char_count) += 6;
        }
}
