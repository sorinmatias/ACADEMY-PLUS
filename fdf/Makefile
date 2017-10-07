# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smatias- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 16:35:04 by vdruta            #+#    #+#              #
#    Updated: 2017/03/01 15:57:35 by smatias-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRCS = src/draw_line.c src/expose_hook.c src/ft_atoi_base.c src/ft_center_reset.c \
		src/ft_color.c src/ft_connect_points.c src/ft_dot.c src/ft_error.c \
		src/ft_get_row_col.c src/ft_init.c src/ft_init_map.c src/ft_move.c \
		src/ft_print.c src/ft_show_usage.c src/ft_tile_width_height.c \
		src/ft_validate_line.c src/ft_zoom.c  src/key_hook.c src/main.c \
		src/ft_control_height.c src/ft_fit_to_screen.c

OBJ = draw_line.o expose_hook.o ft_atoi_base.o ft_center_reset.o \
		ft_color.o ft_connect_points.o ft_dot.o ft_error.o \
		ft_get_row_col.o ft_init.o ft_init_map.o ft_move.o \
		ft_print.o ft_show_usage.o ft_tile_width_height.o \
		ft_validate_line.o ft_zoom.o  key_hook.o main.o \
		ft_control_height.o ft_fit_to_screen.o

all: $(NAME)

$(NAME):
	make -C libft/ fclean
	make -C libft/
	gcc -Wall -Werror -Wextra -I libft/includes -c $(SRCS)
	gcc -o $(NAME) $(OBJ) -L libft/ -lft -lmlx -framework OpenGL -framework AppKit

clean:
	/bin/rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f libft/libft.a

re: fclean all
