# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ctreton <corentintreton@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/07/29 22:50:43 by ctreton           #+#    #+#              #
#    Updated: 2013/12/31 04:31:49 by ctreton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Werror -Wextra
NAME=libft.a
SRC=ft_atoi.c     ft_memcmp.c     ft_putstr.c    ft_striteri.c ft_strnstr.c \
	ft_bzero.c    ft_memcpy.c     ft_putstr_fd.c ft_strjoin.c  ft_strrchr.c \
	ft_isalnum.c  ft_memdel.c     ft_strcat.c    ft_strlcat.c  ft_strrev.c \
	ft_isalpha.c  ft_memmove.c    ft_strchr.c    ft_strlen.c   ft_strsplit.c \
	ft_isascii.c  ft_memset.c     ft_strclr.c    ft_strmap.c   ft_strstr.c \
	ft_isdigit.c  ft_putchar.c    ft_strcmp.c    ft_strmapi.c  ft_strsub.c \
	ft_isprint.c  ft_putchar_fd.c ft_strcpy.c    ft_strncat.c  ft_strtrim.c \
	ft_itoa.c     ft_putendl.c    ft_strdel.c    ft_strncmp.c  ft_tolower.c \
	ft_memalloc.c ft_putendl_fd.c ft_strdup.c    ft_strncpy.c  ft_toupper.c \
	ft_memccpy.c  ft_putnbr.c     ft_strequ.c    ft_strnequ.c  \
	ft_memchr.c   ft_putnbr_fd.c  ft_striter.c   ft_strnew.c
OBJ=ft_atoi.o     ft_memcmp.o     ft_putstr.o    ft_striteri.o ft_strnstr.o \
	ft_bzero.o    ft_memcpy.o     ft_putstr_fd.o ft_strjoin.o  ft_strrchr.o \
	ft_isalnum.o  ft_memdel.o     ft_strcat.o    ft_strlcat.o  ft_strrev.o \
	ft_isalpha.o  ft_memmove.o    ft_strchr.o    ft_strlen.o   ft_strsplit.o \
	ft_isascii.o  ft_memset.o     ft_strclr.o    ft_strmap.o   ft_strstr.o \
	ft_isdigit.o  ft_putchar.o    ft_strcmp.o    ft_strmapi.o  ft_strsub.o \
	ft_isprint.o  ft_putchar_fd.o ft_strcpy.o    ft_strncat.o  ft_strtrim.o \
	ft_itoa.o     ft_putendl.o    ft_strdel.o    ft_strncmp.o  ft_tolower.o \
	ft_memalloc.o ft_putendl_fd.o ft_strdup.o    ft_strncpy.o  ft_toupper.o \
	ft_memccpy.o  ft_putnbr.o     ft_strequ.o    ft_strnequ.o  \
	ft_memchr.o   ft_putnbr_fd.o  ft_striter.o   ft_strnew.o

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) -c $(SRC) -I. $(CFLAGS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)	

re: fclean all

.PHONY = all clean fclean re
