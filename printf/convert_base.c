/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:39:23 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/18 16:27:15 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_convert_base(unsigned int nbr)
{
	char	*str;

	str = malloc(sizeof(char) * 100);
	if (nbr == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	convert_to_base(nbr, "0123456789ABCDEF", str);
	return (str);
}

void	convert_to_base(unsigned int nbr, char *base, char *str)
{
	unsigned int	base_len;
	int				i;

	i = 0;
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

void	ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_to_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return (str);
}
