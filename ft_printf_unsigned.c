/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alikhaled1855gmail.com <alikhaled1855gm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 00:02:08 by alikhaled18       #+#    #+#             */
/*   Updated: 2025/12/15 17:26:00 by alikhaled18      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned int num)
{
	int		count;
	char	c;

	count = 0;
	if (num >= 10)
		count += ft_printf_unsigned(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
