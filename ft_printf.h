/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaleh <alsaleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 04:40:58 by alsaleh           #+#    #+#             */
/*   Updated: 2025/12/23 12:20:16 by alsaleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int	ft_printf_char(int c);
int	ft_printf_str(char *str);
int	ft_printf_int(int n);
int	ft_printf_hexa_lower(unsigned int num);
int	ft_printf_hexa_upper(unsigned int num);
int	ft_printf_unsigned(unsigned int num);
int	ft_printf_pointer(void *v);
int	ft_printf(const char *s, ...);

#endif