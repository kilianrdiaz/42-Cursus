# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/15 13:43:43 by kroyo-di          #+#    #+#              #
#    Updated: 2024/08/12 19:04:42 by kroyo-di         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_printchar.c ft_printnbr.c ft_printstr.c ft_strlen.c\
ft_printhex.c ft_printptr.c ft_printunsigned.c
INC = ft_printf.h
OBJS = $(SRCS:.c=.o)
CFLAGS = -g -Wall -Werror -Wextra

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

all : $(NAME)

%.o : %.c $(INC) Makefile
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
