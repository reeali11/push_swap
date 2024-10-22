# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reeali <reeali@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 15:54:38 by reeali            #+#    #+#              #
#    Updated: 2024/02/26 17:24:37 by reeali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = 	push_swap.c \
		actions_a.c \
		actions_b.c \
		min.c\
		max.c \
		parsing.c \
		sortbignum.c \
		sortingnum.c \
		utlis.c \
		error.c \
		
CFLAGS = -Wall -Wextra -Werror
CC = cc
OBJ = $(SRC:.c=.o)
LIBS = ./libft/libft.a 

all : $(NAME)

$(NAME) : $(OBJ)
	make bonus -sC libft/.
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)
	
	
clean: 
	@rm -f *.o
	@make clean -sC libft/.
		
fclean: clean
	@rm -f $(NAME)
	@rm -f libft/libft.a
	@rm -f push_swap
	
re : fclean all	