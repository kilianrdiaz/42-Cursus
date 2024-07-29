# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/15 13:43:43 by kroyo-di          #+#    #+#              #
#    Updated: 2024/07/29 19:38:17 by kroyo-di         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_printchar.c ft_printnbr.c ft_printstr.c ft_strlen.c\
tests.c
INC = ft_printf.h
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBJS) $(INC) Makefile
	ar rcs $(NAME) $(OBJS)

all : $(NAME)

%.o : %.c 
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(OBJS)

re: fclean all

.PHONY: all clean fclean re
