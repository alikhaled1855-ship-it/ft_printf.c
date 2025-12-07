#include "ft_printf.h"

static char to_hexa(unsigned n)
{
    if(n >= 0 && n <= 9)
    return (n + '0');
    else
    if(n == 10)
    return ('a');
    else if(n == 11)
    return ('b');
    else if(n == 12)
    return ('c');
    else if(n == 13)
    return ('d');
    else if(n == 14)
    return ('e');
    else
    return ('f');
}

int ft_printf_hexa_lower(unsigned num)
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
