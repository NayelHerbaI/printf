/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:38:50 by naherbal          #+#    #+#             */
/*   Updated: 2023/07/18 13:54:02 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_uint(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'u')
		return (ft_unsigned_putnbr(va_arg(args, unsigned int), count));
	return (0);
}

int	print_lhex(char c, va_list args)
{
	char	*tmp;
	int		len;

	if (c == 'x')
	{
		tmp = str_to_lowercase(ft_convert_base(va_arg(args, unsigned int)));
		ft_putstr(tmp);
		len = ft_strlen(tmp);
		free(tmp);
		return (len);
	}
	return (0);
}

int	print_uphex(char c, va_list args)
{
	char	*tmp;
	int		len;

	if (c == 'X')
	{
		tmp = ft_convert_base(va_arg(args, unsigned int));
		ft_putstr(tmp);
		len = ft_strlen(tmp);
		free(tmp);
		return (len);
	}
	return (0);
}

int	print_pct(char c, va_list args)
{
	(void)args;
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
