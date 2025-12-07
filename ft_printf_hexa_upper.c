#include "ft_printf.h"

static char to_hexa(unsigned n)
{
    if(n >= 0 && n <= 9)
    return (n + '0');
    else
    if(n == 10)
    return ('A');
    else if(n == 11)
    return ('B');
    else if(n == 12)
    return ('C');
    else if(n == 13)
    return ('D');
    else if(n == 14)
    return ('E');
    else
    return ('F');
}

int ft_printf_hexa_upper(unsigned num)
{
    int count;

    count = 0;
    if(num >= 16)
    count += ft_printf_hexa(num/16);
    char c = to_hexa(num % 16);
    write(1, &c, 1);
    count++;

    return (count);
}
