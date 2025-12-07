#include "ft_printf.h"

int ft_printf_unsigned(unsigned num)
{
    int count;

    count = 0;
    if(num >= 10)
    count += ft_printf_unsigned(num / 10);
    char c = (num % 10) + '0';
    write(1, &c, 1);
    count++;

    return (count);
}
