/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naherbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:04:33 by naherbal          #+#    #+#             */
/*   Updated: 2023/04/20 16:27:40 by naherbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

typedef int	(*t_f)(char, va_list);
int		ft_printf(char const *str, ...);
int		print_char(char c, va_list args);
int		print_string(char c, va_list args);
int		print_vptr(char c, va_list args);
int		print_d(char c, va_list args);
int		print_int(char c, va_list args);
int		print_uint(char c, va_list args);
int		print_lhex(char c, va_list args);
int		print_uphex(char c, va_list args);
int		print_pct(char c, va_list args);
int		ft_putchar(char c);
int		ft_putnbr(int nb, int count);
int		ft_unsigned_putnbr(unsigned int nb, int count);
int		ft_putstr(char *str);
char	*ft_convert_base(unsigned int nbr);
char	*ft_long_convert_base(unsigned long long int nbr);
void	convert_to_base(unsigned int nbr, char *base, char *str);
void	long_convert_to_base(unsigned long long int nbr, char *base, char *str);
void	ft_strrev(char *str);
int		ft_strlen(char *str);
char	*str_to_lowercase(char *str);

#endif
