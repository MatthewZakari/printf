#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
void print_char(va_list args, int *char_count);
void print_string(va_list args, int *char_count);
void print_percent(int *char_count);

#endif
