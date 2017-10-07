/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 07:03:48 by smatias-          #+#    #+#             */
/*   Updated: 2017/03/14 20:20:36 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_PRINTF_H_
# define _FT_PRINTF_H__
# include <stdlib.h>
# include <stdarg.h>
# include <inttypes.h>
# include <sys/types.h>
# include <string.h>
# include "libft/libft.h"
# define CONVERSIONS "sSpdDioOuUxXcCfF"
# define FLAGS "#0-+ jzhl123456789.*"

long long		g_nbr;
typedef	struct 	s_arg
{
	int 	precision;
	int 	width;
	int 	flag_hash;
	int 	flag_zero;
	int 	flag_minus;
	int 	flag_plus;
	int 	flag_space;
	int 	lm_j;
	int 	lm_z;
	int 	lm_h;
	int 	lm_hh;
	int 	lm_l;
	int 	lm_ll;
}				t_arg;
int 			ft_printf(const char *format, ...);
int 			ft_format(const char *format, va_list ap);
void 			ft_format_percent(const char *format, int *i, int *bytes,
									va_list ap);
int 			ft_validate_descriptor(const char *format);
void			ft_init_flags_lm(t_arg *arg);
void			ft_validate_flags(t_arg *arg, char *desc, va_list ap);
void			ft_validate_lm(t_arg *arg, char *desc);
void			ft_invalid_conversion(int *bytes, char *desc, t_arg arg);
int				ft_desc_len(const char *format);
void			ft_process_s(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_ss(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_p(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_d(va_list ap, int *bytes, char *desc, t_arg arg);
char			*ft_process_d_precision(char *str, t_arg arg);
void			ft_process_d_put_flag_plus(int *bytes, char **str, t_arg arg);
void			ft_process_d_put_flag_space(int *bytes, char **str, t_arg arg);
void			ft_process_d_short(va_list ap, int *bytes, char *desc,
									t_arg arg);
char			*ft_process_d_width(char *str, t_arg arg);
void			ft_process_dd(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_f(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_o(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_o_lm_j(va_list ap, int *bytes, char *dsc, t_arg arg);
void			ft_process_oo(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_u(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_uu(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_x(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_x_no_lm(va_list ap, int *bytes, char *dsc, t_arg ar);
void			ft_process_xx(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_xx_lm_l(va_list ap, int *bytes, char *dsc, t_arg ar);
void			ft_process_xx_lm_z(va_list ap, int *bytes, char *dsc, t_arg ar);
void			ft_process_c(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_c_flag_minus(unsigned char c, int *bytes, t_arg arg);
void			ft_process_c_flag_zero(unsigned char c, int *bytes, t_arg arg);
void			ft_process_c_uc(va_list ap, int *bytes, t_arg arg);
void			ft_process_c_width(unsigned char c, int *bytes, t_arg arg);
void			ft_process_cc(va_list ap, int *bytes);
void			ft_process_f(va_list ap, int *bytes, char *desc, t_arg arg);
void			ft_process_percent(int *bytes, t_arg arg);
void			ft_process_percent_width(char **str, t_arg arg);

char			*ft_itoabase(uintmax_t val, int base);
char			*ft_itoabbase(uintmax_t val, int base);
char			*ft_ftoa(double val, int precision);
char			*ft_int_to_ascii_base(int val, int base);
char			*ft_intmax_t_to_ascii_base(intmax_t val, int base);
char			*ft_uintmax_t_to_ascii_base(uintmax_t val, int base);
char			*ft_unsigned_int_to_ascii_base(unsigned int val, int base);
char			*ft_unsigned_long_long_to_ascii_base(unsigned long long val,
					int base);
char			*ft_unsigned_long_to_ascii_base(unsigned long val, int base);
char			*ft_unsigned_short_to_ascii_base(unsigned short val, int base);
char			*ft_long_long_to_ascii_base(long long val, int base);
char			*ft_long_to_ascii_base(long val, int base);
char			*ft_short_to_ascii_base(short val, int base);
char			*ft_size_t_to_ascii_base(size_t val, int base);
char			*ft_ssize_t_to_ascii_base(ssize_t val, int base);
void			ft_putwchar(wchar_t wc);
int				ft_wstrsize(wchar_t *wstr);
int				ft_wstrlen(const wchar_t *s);
wchar_t			*ft_wstrjoin(wchar_t const *s1, wchar_t const *s2);
wchar_t			*ft_wstrdup(const wchar_t *s1);
int				ft_wcharsize(wchar_t wc);
wchar_t			*ft_wmemset(wchar_t *wstr, wchar_t c, size_t len);
wchar_t			*ft_wstrsub(wchar_t *s, unsigned int start, size_t len);

#endif