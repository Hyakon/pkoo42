/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 08:14:23 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/18 17:17:27 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"

typedef struct		s_tetri
{
	char			**tetri;
	struct s_tetri	*next;
}					t_tri;

void				fillit(const char *file);
int					tetrifill(t_tri **tetrilist, const char *file);
int					tetricheck(t_tri *tetriminos, int num);
void				lstdel(t_tri **tetrilist);
void				del(char **tetri);

#endif
