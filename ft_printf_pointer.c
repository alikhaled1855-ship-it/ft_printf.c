/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alikhaled1855gmail.com <alikhaled1855gm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 00:01:49 by alikhaled18       #+#    #+#             */
/*   Updated: 2025/12/15 17:22:23 by alikhaled18      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	to_hexa(unsigned long n)
{
	if (n <= 9)
		return (n + '0');
	return (n - 10 + 'a');
}

static int	ft_printf_hexa_ptr(unsigned long num)
{
	int		count;
	char	c;

	count = 0;
	if (num >= 16)
		count += ft_printf_hexa_ptr(num / 16);
	c = to_hexa(num % 16);
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_printf_pointer(void *v)
{
	int				count;
	unsigned long	num;

	if (!v)
		return (write(1, "0x0", 3));
	num = (unsigned long)v;
	count = write(1, "0x", 2);
	count += ft_printf_hexa_ptr(num);
	return (count);
}
