#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int ft_printf_char(int c);
int ft_printf_str(char *str);
int ft_printf_int(int n);
int ft_printf_hexa_lower(unsigned num);
int ft_printf_hexa_upper(unsigned num);
int ft_printf_unsigned(unsigned num);
int ft_printf_pointer(void *v);
int ft_printf(const char *s, ...);

#endif