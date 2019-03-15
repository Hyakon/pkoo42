/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:47:56 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/19 15:02:51 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** Description : Display the links content of a list.
 ** Return : (void).
*/

#include "libft.h"

static void	ft_lstprintone(t_list *elem)
{
	ft_putendl(elem->content);
}

void		ft_lstprint(t_list *alst)
{
	ft_lstiter(alst, &ft_lstprintone);
}
