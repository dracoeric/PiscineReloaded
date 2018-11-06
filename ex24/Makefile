#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erli <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 13:33:07 by erli              #+#    #+#              #
#    Updated: 2018/11/06 14:59:37 by erli             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRC		= 	srcs/ft_putchar.c	\
			srcs/ft_putstr.c	\
			srcs/ft_strcmp.c	\
			srcs/ft_strlen.c	\
			srcs/ft_swap.c

OBJS	=	ft_putchar.o	\
			ft_putstr.o	\
			ft_strcmp.o	\
			ft_strlen.o	\
			ft_swap.o

NAME 	=	libft.a

RM		=	rm -f


all		:
		@make $(NAME)

$(NAME)	: makeo
		ar rc $(NAME) $(OBJS) 

makeo	:
		gcc -c $(SRC)

clean	:
		rm -f *.o

fclean	: clean
		rm $(NAME)

re		: fclean all