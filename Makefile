# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bluzcarv <bluzcarv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/17 12:36:19 by bluzcarv          #+#    #+#              #
#    Updated: 2021/08/19 18:58:41 by bluzcarv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES =	\
			ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_strjoin.c \
			ft_substr.c \
			ft_strtrim.c \
			ft_putnbr_fd.c \
			ft_itoa.c \
			ft_split.c \
			ft_lstnew.c
SOURCES_B =	\
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_B = $(SOURCES_B:.c=.o)
NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS) $(OBJECTS_B)
	ar rc $(NAME) $(OBJECTS) $(OBJECTS_B)

$(OBJECTS): $(SOURCES)
	$(CC) $(FLAGS) -c $(SOURCES)

$(OBJECTS_B): $(SOURCES_B)
	$(CC) $(FLAGS) -c $(SOURCES_B)

clean:
	$(RM) $(OBJECTS) $(OBJECTS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re bonus
