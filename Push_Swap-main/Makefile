# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/29 20:47:38 by olyetisk          #+#    #+#              #
#    Updated: 2024/04/29 20:47:39 by olyetisk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g 
LIBFT_DIR = libft
LIBFT = ./libft/libft.a
RM = rm -rf
SRCS = utils.c move.c sort.c main.c
SRC	= $(addprefix ./src/,$(SRCS))
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -L./$(LIBFT_DIR) -lft

$(LIBFT):
	@make -s -C $(LIBFT_DIR)

$(OBJ): $(SRC)
	@$(CC) $(CFLAGS) -c $(SRC) -I./$(LIBFT_DIR)
	@mv *.o src

clean:	
	@$(RM) src/*.o
	@make -s -C $(LIBFT_DIR) clean

fclean:	clean
	@$(RM) $(NAME)
	@make -s -C $(LIBFT_DIR) fclean

re:	fclean all clean

.PHONY: all clean fclean re