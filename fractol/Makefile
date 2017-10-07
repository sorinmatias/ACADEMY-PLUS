# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smatias- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/06 09:44:20 by smatias-          #+#    #+#              #
#    Updated: 2017/03/10 10:27:11 by smatias-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRC = srcs/main.c srcs/mandelbrot.c srcs/julia.c srcs/burningship.c \
		srcs/key_hook.c srcs/util.c src/ft_mlx.c

OBJ1 := main.o mandelbrot.o julia.o burningship.o \
		key_hook.o util.o ft_mlx.o

VPATH:= ./srcs/ ./obj/ ./include/

# Path for .c , .h and .o Files 
SRC_PATH := ./srcs/
OBJ_PATH := ./objects/
INC_PATH := -I ./includes
INC_MLX := -I ~/home/zorin/academie/fdf/minilibx/

OBJ := $(patsubst %,$(OBJ_PATH)%,$(OBJ1))

FLAGS = -Wall -Wextra -Werror

LIBS_LINUX = -L libft/ -lft -L/home/zorin/academie/fdf/minilibx/ -lmlx -L/usr/lib -lXext -lX11 -lm -lpthread

LIBS_MAC = -L libft/ -lft -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
				@echo gcc $<
				@gcc $(FLAGS) -o $@ -c $< $(INC_PATH) 

$(NAME):      $(OBJ)
				make -C libft
				@gcc -o $@ $^ $(LIBS_LINUX)

clean:
	/bin/rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft/libft.a

re: fclean all