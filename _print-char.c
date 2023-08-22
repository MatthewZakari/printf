#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - Helper function to print a character
 * @args: The va_list containing the character argument
 * @char_count: Pointer to the character count
 */

void print_char(va_list args, int *char_count)
{
        char c = va_arg(args, int);

        write(1, &c, 1);
        (*char_count)++;
}
