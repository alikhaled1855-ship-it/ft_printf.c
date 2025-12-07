#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int ft_printf_char(int c);
int ft_printf_str(char *str);
int ft_printf_int(int num);
int ft_printf_hexa_lower(unsigned num);
int ft_printf_hexa_upper(unsigned num);
int ft_printf_avrage(void);
int ft_printf_unsigned(unsigned num);