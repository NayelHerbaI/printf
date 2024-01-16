# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naherbal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 20:28:19 by naherbal          #+#    #+#              #
#    Updated: 2023/07/18 13:39:15 by naherbal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_printf.c						\
		printf_functions.c				\
		second_printf_functions.c		\
		functions.c						\
		convert_base.c					\
		long_convert_base.c				\

OBJ		=	$(SRC:.c=.o)

NAME	=	libftprintf.a

CFLAGS	=	-Wall -Wextra -Werror

HEADERS	=	-I includes -c

RM		=	rm -rf

LIB		=	ar rcs

all:		$(NAME)

$(NAME):	$(OBJ)
			cc $(CFLAGS) $(HEADERS) $(SRC)
			$(LIB) $(NAME) $(OBJ) && ranlib $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
