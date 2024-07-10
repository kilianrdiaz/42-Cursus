# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kroyo-di <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/23 19:13:47 by kroyo-di          #+#    #+#              #
#    Updated: 2024/07/10 15:43:23 by kroyo-di         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
       ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c ft_strtrim.c\
       ft_memcmp.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
       ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c\
       ft_substr.c  ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
INC = libft.h
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBJS) $(INC) Makefile
	ar rcs $(NAME) $(OBJS)

all : $(NAME)

%.o : %.c libft.h
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
