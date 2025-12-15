/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alikhaled1855gmail.com <alikhaled1855gm    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 00:02:36 by alikhaled18       #+#    #+#             */
/*   Updated: 2025/12/15 17:29:45 by alikhaled18      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf_char(int c);
int		ft_printf_str(char *str);
int		ft_printf_int(int n);
int		ft_printf_hexa_lower(unsigned int num);
int		ft_printf_hexa_upper(unsigned int num);
int		ft_printf_unsigned(unsigned int num);
int		ft_printf_pointer(void *v);
int		ft_printf(const char *s, ...);

#endif
