# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rulrike <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/25 17:47:47 by rulrike           #+#    #+#              #
#    Updated: 2020/11/25 17:54:36 by rulrike          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = ft_bzero.c ft_memmove.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_strlen.c ft_memchr.c ft_memcmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_atoi.c ft_strdup.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_calloc.c ft_strlcat.c ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_itoa.c ft_split.c
CC = gcc
RM = rm -rf
FLAGS = -Wall -Werror -Wextra
OBJECTS = ${FILES:.c=.o}
LIB = ar rc ${NAME}
$(NAME): ${OBJECTS}
	${LIB} ${OBJECTS}
all: ${NAME}
clean:
	${RM} ${OBJECTS}
fclean: clean
	${RM} ${NAME}
re: fclean all
