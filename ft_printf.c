/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alikhaled1855gmail.com <alikhaled1855gm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 00:02:22 by alikhaled18       #+#    #+#             */
/*   Updated: 2025/12/15 17:07:13 by alikhaled18      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char c, va_list *args)
{
	if (c == 'c')
		return (ft_printf_char(va_arg(*args, int)));
	else if (c == 's')
		return (ft_printf_str(va_arg(*args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_printf_int(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_printf_unsigned(va_arg(*args, unsigned int)));
	else if (c == 'x')
		return (ft_printf_hexa_lower(va_arg(*args, unsigned int)));
	else if (c == 'X')
		return (ft_printf_hexa_upper(va_arg(*args, unsigned int)));
	else if (c == 'p')
		return (ft_printf_pointer(va_arg(*args, void *)));
	else if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;
	size_t	i;

	if (!s)
		return (-1);
	va_start(args, s);
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i])
				count += handle_format(s[i], &args);
			else
				break ;
		}
		else
			count += write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
