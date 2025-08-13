# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabuqare  <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:48:30 by mcombeau          #+#    #+#              #
#    Updated: 2025/08/12 23:40:25 by mabuqare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SONAME = libft.so
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I.
AR = ar rcs

SRCS = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strdup.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memcmp.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

BONUS_SRCS = \
	# ft_lstsize.c \
	# ft_lstlast.c \
	# ft_lstadd_back.c \
	# ft_lstdelone.c \
	# ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Regular object files for static library
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# PIC object files for shared library
%.so.o: %.c
	$(CC) $(CFLAGS) -fPIC -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $@ $^

# Shared library target
so: $(SRCS:.c=.so.o)
	$(CC) -shared -o $(SONAME) $^

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS) $(SRCS:.c=.so.o) $(BONUS_SRCS:.c=.so.o)

fclean: clean
	rm -f $(NAME) $(SONAME)

re: fclean all

.PHONY: all clean fclean re bonus so
