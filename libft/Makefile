# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reeali <reeali@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 16:00:42 by reeali            #+#    #+#              #
#    Updated: 2024/02/26 16:00:44 by reeali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c		\
	   ft_bzero.c		\
	   ft_memcpy.c		\
	   ft_memmove.c 	\
	   ft_memchr.c		\
	   ft_memcmp.c		\
	   ft_strlen.c		\
	   ft_isalpha.c 	\
	   ft_isdigit.c		\
	   ft_isalnum.c		\
	   ft_isascii.c		\
	   ft_isprint.c		\
	   ft_toupper.c		\
	   ft_tolower.c		\
	   ft_strchr.c		\
	   ft_strrchr.c		\
	   ft_strncmp.c		\
	   ft_strlcpy.c		\
	   ft_strlcat.c		\
	   ft_strnstr.c		\
	   ft_atoi.c		\
	   ft_calloc.c		\
	   ft_strdup.c		\
	   ft_substr.c		\
	   ft_strjoin.c 	\
	   ft_strtrim.c		\
	   ft_split.c		\
	   ft_itoa.c		\
	   ft_strmapi.c		\
	   ft_putchar_fd.c	\
	   ft_putstr_fd.c	\
	   ft_putendl_fd.c	\
	   ft_putnbr_fd.c	\
	   ft_striteri.c	\
	   get_next_line_utlis.c \
	   ft_putchar.c	\
		ft_putnbr.c		\
		ft_putstr.c		\
		ft_hexa.c		\
		ft_putunsnbr.c	\
		ft_pointer.c	\
		ft_printf.c

SRCSB = ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstclear.c		\
		ft_lstdelone.c

OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCSB:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJSB) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME) $(OBJSB)
	ar -rc $(NAME) $(OBJSB)
