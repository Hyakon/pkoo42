/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:48:24 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/19 14:59:15 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Parcourt la liste lst en appliquant à chaque maillon
** 	la fonction f.
** Param. #1 : Pointeur sur le premier maillon d’une liste.
** Param. #2 : L’adresse d’une fonction à laquelle appliquer chaque maillon
** 	de la liste.
** Retour : Rien.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst);
		lst = lst->next;
	}
}
