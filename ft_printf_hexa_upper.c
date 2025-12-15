/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_upper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alikhaled1855gmail.com <alikhaled1855gm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 00:01:35 by alikhaled18       #+#    #+#             */
/*   Updated: 2025/12/15 17:14:48 by alikhaled18      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	to_hexa(unsigned int n)
{
	if (n <= 9)
		return (n + '0');
	return (n - 10 + 'A');
}

int	ft_printf_hexa_upper(unsigned int num)
{
	int		count;
	char	c;

	count = 0;
	if (num >= 16)
		count += ft_printf_hexa_upper(num / 16);
	c = to_hexa(num % 16);
	write(1, &c, 1);
	count++;
	return (count);
}
