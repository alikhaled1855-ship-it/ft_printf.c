#include "ft_printf.h"

static char to_hexa(unsigned long n)
{
    if(n <= 9)  //it will not be 0 because it's unsigned
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

static int ft_printf_hexa_lower_new(unsigned long num)
{
    int count;

    count = 0;
    if(num >= 16)
    count += ft_printf_hexa_lower_new(num/16);
    char c = to_hexa(num % 16);
    write(1, &c, 1);
    count++;

    return (count);
}

int ft_printf_pointer(void *v)
{
    int count;
    unsigned long num;

    count = 0;
    if(v == NULL)
    {
        counts += write(1, "0x0", 3);
        return (count);
    }
    num = (unsigned long)v;
    write(1, "0x", 2);
    count += 2;
    count += ft_printf_hexa_lower_new(num);

    return (count);
}
