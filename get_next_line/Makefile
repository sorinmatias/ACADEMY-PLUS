
NAME = test_gnl

SRCS = get_next_line.c main.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -I libft/includes/ -c $(SRCS)
	gcc -o $(NAME) $(OBJ) -L libft/ -lft

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
