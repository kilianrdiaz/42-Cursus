# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/23 19:13:47 by kroyo-di          #+#    #+#              #
#    Updated: 2024/06/26 18:24:48 by kroyo-di         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
       ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c\
       ft_memcmp.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
       ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c\
       ft_substr.c  ft_strjoin.c
INC = libft.h
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBJS) $(INC)
	ar rcs $(NAME) $(OBJS)

all : $(NAME)

%.o : %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
