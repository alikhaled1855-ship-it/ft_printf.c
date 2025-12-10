#include "ft_printf.h"

int ft_printf_int(int n)
{
    int     len;
    char    c;

    len = 0;
    if (n == -2147483648)
        return (write(1, "-2147483648", 11));
    if (n < 0)
    {
        len += write(1, "-", 1);
        n = -n;
    }
    if (n > 9)
        len += ft_printf_int(n / 10);
    c = (n % 10) + '0';
    len += write(1, &c, 1);
    return (len);
}
