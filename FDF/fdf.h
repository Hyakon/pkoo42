/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:32:03 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/16 11:31:07 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include <mlx.h>

# define WIN_SIZE_X 1000
# define WIN_SIZE_Y 750
# define WIN_NAME "FdF"

typedef struct		s_ptr
{
	void			*mlx_ptr;
	void			*win_ptr;
}					t_ptr;

typedef struct		s_point
{
	int				x;
	int				y;
	int				z;
	struct s_point	*nextx;
	struct s_point	*nexty;
}					t_point;

t_ptr				*create_window();
int					fdf(const char *file, t_ptr *ptr_list);
int					create_map(t_point *point_list, t_ptr *ptr_list);
void				del_list(t_point **point_list);

#endif
