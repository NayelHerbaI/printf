/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:38:50 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/24 15:37:55 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char c, va_list args)
{
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	return (0);
}

int	print_char(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	return (0);
}

int	print_vptr(char c, va_list args)
{
	char	*tmp;
	int		len;

	if (c == 'p')
	{
		tmp = str_to_lowercase(ft_long_convert_base
				(va_arg(args, unsigned long long int)));
		ft_putstr("0x");
		len = ft_strlen(tmp);
		ft_putstr(tmp);
		free(tmp);
		return (len + 2);
	}
	return (0);
}

int	print_d(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'd')
	{
		count = ft_putnbr(va_arg(args, int), count);
		return (count);
	}
	return (0);
}

int	print_int(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'i')
	{
		count = ft_putnbr(va_arg(args, int), count);
		return (count);
	}
	return (0);
}
