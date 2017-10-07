/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smatias- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 00:05:34 by smatias-          #+#    #+#             */
/*   Updated: 2017/07/05 13:49:16 by smatias-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
#include <stdio.h>
# include "../libft/libft.h"

typedef	struct 		s_room
{
	char			*name;
	int				id;
	int				x;
	int				y;
	struct s_room	*next;
}					t_room;

typedef struct 		s_link
{
	char			*st;
	char			*nd;
	int				status;
	struct s_link	*next;
}					t_link;

typedef struct 		s_ant
{
	int				id;
	char			*poz;
	struct s_ant	*next;
}					t_ant;

typedef struct 		s_path
{
	int				no_rm;
	char			**path_list;
}					t_path;

typedef struct 		s_data
{
	int				id;
	int				no_ant;
	char			*st;
	char			*nd;
	t_room			*room;
	t_link			*link;
	t_ant			*ant;
	t_path			*path;
}					t_data;

void				ft_error(void);
int					count_rooms(t_data *data);
void				init_data(t_data *data);
void				validate_error(t_data *data);
int					validate_room(char *str);
int					validate_link(char *str);
int					validate_ant(char *str);
int 				str_is_number(char *str);
char				*return_str_elem(char *source, char separator, int arg);
int					validate_path(t_data *data);
void				generate_path(t_data *data);
void				ft_add_room(t_data *data, char *str);
int					count_rooms(t_data *data);
int					count_path(char **path_list);
void				ft_add_link(t_data *data, char *str);
void				ft_add_ant(t_data *data, char *pozition, int id);
void				genereate_ant_path(t_data *data);
void				ft_move_ants(t_data *data);
#endif