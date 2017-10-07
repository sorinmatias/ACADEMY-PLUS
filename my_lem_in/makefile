CC = gcc
EXEC = lem_in
CFLAGS = -Wall -Wextra -Werror
LIBFLAG = -L libft/ -lft -I libft/
SRC = 	main.c		\
		ft_validate.c	\
		ft_path.c	\
		ft_util.c	\
		ft_util2.c  \
		ft_add.c	\
		ft_ant.c	\
			\

LIBRARY = libft/libft.a

HEAD = ./include/

all: $(EXEC)

$(EXEC): $(SRC) $(LIBRARY)
	$(CC) -o $(EXEC) $(SRC) -I$(HEAD) $(LIBFLAG)

$(LIBRARY):
	make -C libft/

clean:
	rm -f $(EXEC)

fclean:
	rm -f $(EXEC)

re: clean all

.PHONY: all clean
