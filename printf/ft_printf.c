/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:24:49 by naherbal          #+#    #+#             */
/*   Updated: 2023/06/21 14:11:02 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	create_tab(int (*function_tab[9])(char, va_list))
{
	function_tab[0] = &print_char;
	function_tab[1] = &print_string;
	function_tab[2] = &print_vptr;
	function_tab[3] = &print_d;
	function_tab[4] = &print_int;
	function_tab[5] = &print_uint;
	function_tab[6] = &print_lhex;
	function_tab[7] = &print_uphex;
	function_tab[8] = &print_pct;
}

static int	second_printf(int (*function_tab[9])(char, va_list),
char const *str, va_list args)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < 9)
	{
		count += function_tab[i](*str, args);
		i++;
	}
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			count;
	t_f			function_tab[9];

	create_tab(function_tab);
	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += second_printf(function_tab, str, args);
		}
		else
		{
			count++;
			ft_putchar(*str);
		}
		str++;
	}
	va_end(args);
	return (count);
}
