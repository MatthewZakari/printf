#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_percent - Helper function to print '%'
 * @char_count: Pointer to the character count
 */
void print_percent(int *char_count)
{
	write(1, "%", 1);
	(*char_count)++;
}
