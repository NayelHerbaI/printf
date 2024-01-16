/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   long_convert_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:27:58 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/17 21:30:40 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_long_convert_base(unsigned long long int nbr)
{
	char	*str;

	str = malloc(sizeof(char) * 100);
	long_convert_to_base(nbr, "0123456789ABCDEF", str);
	return (str);
}

void	long_convert_to_base(unsigned long long int nbr, char *base, char *str)
{
	long long int	base_len;
	int				i;

	i = 0;
	if (nbr == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return ;
	}
	base_len = ft_strlen(base);
	while (nbr > 0)
	{
		str[i] = base[nbr % base_len];
		i++;
		nbr = nbr / base_len;
	}
	str[i] = '\0';
	ft_strrev(str);
}

int	ft_unsigned_putnbr(unsigned int n, int count)
{
	if (n >= 10)
		count = ft_putnbr(n / 10, count);
	count += ft_putchar(n % 10 + 48);
	return (count);
}
