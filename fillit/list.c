/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:25:08 by gfestin           #+#    #+#             */
/*   Updated: 2018/12/20 15:25:24 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		del(char **tetri)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tetri[i] != NULL)
			free(tetri[i]);
		i++;
	}
}

void		lstdel(t_tri **tetrilist)
{
	t_tri	*tmp;
	t_tri	*next;

	if (*tetrilist == NULL)
		return ;
	tmp = *tetrilist;
	next = (*tetrilist)->next;
	while (next != NULL)
	{
		del(tmp->tetri);
		free(tmp);
		tmp = next;
		next = next->next;
	}
	del(tmp->tetri);
	free(tmp);
	*tetrilist = NULL;
}
