/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaleh <alsaleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:30:33 by alsaleh           #+#    #+#             */
/*   Updated: 2025/12/23 12:30:37 by alsaleh          ###   ########.fr       */
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
