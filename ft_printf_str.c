#include "ft_printf.h"

int ft_printf_str(char *str)
{
    size_t i = 0;
    int count = 0;

    if (!str)
        return write(1, "(null)", 6);

    while (str[i])
        count += write(1, &str[i++], 1);

    return count;
}
