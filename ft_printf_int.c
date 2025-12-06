#include "ft_printf.h"

int ft_printf_int(int num)
{
    char *str;
    size_t i;

    i = 0;
    str = ft_itoa(num);
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    free(str);
    return i;
}
