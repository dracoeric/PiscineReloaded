#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erli <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 14:24:43 by erli              #+#    #+#              #
#    Updated: 2018/11/06 14:31:15 by erli             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	ft_display_file

SRCS	=	main.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra


all		:
		@make $(NAME)

$(NAME)	: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean	:
		rm -f *.o

fclean	:
		rm $(NAME)