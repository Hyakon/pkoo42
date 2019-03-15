/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:59:28 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/16 16:33:53 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Prend en paramètre l’adresse d’un pointeur sur un maillon et
** 	libère la mémoire de ce maillon et celle de tous ses successeurs
** 	l’un après l’autre avec del et free(3). Pour terminer,
** 	le pointeur sur le premier maillon maintenant libéré doit être
** 	mis à NULL (de manière similaire à la fonction ft_memdel de
** 	la partie obligatoire).
** Param. #1 : L’adresse d’un pointeur sur le premier maillon d’une liste à
** 	libérer.
** Retour : Rien.
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*next;

	if (*alst == NULL)
		return ;
	tmp = *alst;
	next = (*alst)->next;
	while (next != NULL)
	{
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = next;
		next = next->next;
	}
	del(tmp->content, tmp->content_size);
	free(tmp);
	*alst = NULL;
}
