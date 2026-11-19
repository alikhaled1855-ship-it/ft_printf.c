/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaleh <alsaleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:31:28 by alsaleh           #+#    #+#             */
/*   Updated: 2025/12/23 12:31:39 by alsaleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	to_hexa(unsigned int n)
{
	if (n <= 9)
		return (n + '0');
	return (n - 10 + 'a');
}

int	ft_printf_hexa_lower(unsigned int num)
{
	int		count;
	char	c;

	count = 0;
	if (num >= 16)
		count += ft_printf_hexa_lower(num / 16);
	c = to_hexa(num % 16);
	write(1, &c, 1);
	count++;
	return (count);
}
