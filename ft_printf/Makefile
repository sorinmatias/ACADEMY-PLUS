# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smatias- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/14 06:51:04 by smatias-          #+#    #+#              #
#    Updated: 2017/03/14 20:24:29 by smatias-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a


SRCS = ft_printf.c ft_process_s.c ft_process_ss.c ft_process_d.c \
		ft_process_d_put_flag_plus.c ft_process_d_put_flag_space.c \
		ft_process_d_precision.c ft_process_d_width.c  ft_process_d_short.c \
		ft_process_dd.c ft_process_c.c  ft_process_c_flag_minus.c \
		ft_process_c_flag_zero.c ft_process_c_width.c ft_process_c_uc.c \
		ft_process_cc.c ft_process_f.c ft_process_o.c ft_process_o_lm_j.c \
		ft_process_oo.c ft_process_x.c  ft_process_x_no_lm.c  \
		ft_process_xx_lm_l.c ft_process_xx_lm_z.c ft_process_xx.c\
		ft_process_percent.c ft_invalid_conversion.c \
		ft_process_u.c ft_process_uu.c ft_process_p.c \
		ft_itoabase.c ft_itoa_big_base.c \
		ft_intmax_t_to_ascii_base.c ft_uintmax_t_to_ascii_base.c \
		ft_short_to_ascii_base.c ft_ssize_t_to_ascii_base.c \
		ft_size_t_to_ascii_base.c ft_unsigned_short_to_ascii_base.c \
		ft_long_long_to_ascii_base.c ft_unsigned_long_long_to_ascii_base.c \
		ft_unsigned_long_to_ascii_base.c ft_unsigned_int_to_ascii_base.c \
		ft_int_to_ascii_base.c ft_long_to_ascii_base.c  ft_ftoa.c\
		ft_wstrsub.c ft_wstrdup.c ft_wstrlen.c ft_wstrjoin.c ft_putwchar.c\
		ft_wmemset.c ft_wstrsize.c ft_wcharsize.c\
		ft_validate_descriptor.c ft_validate_lm.c\
		ft_desc_len.c ft_init_flags_lm.c ft_validate_flags.c \
		

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	make -C libft
	@gcc -Wall -Werror -Wextra -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	make -C libft/ clean
	@/bin/rm -f $(OBJS)

fclean: clean
	make -C libft/ fclean
	@/bin/rm -f $(NAME)

re: fclean all
