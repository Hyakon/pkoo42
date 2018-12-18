/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:06:52 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/16 16:33:24 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Parcourt la liste lst en appliquant à chaque maillon
** 	la fonction f et crée une nouvelle liste “fraiche” avec malloc(3)
** 	résultant des applications successives. Si une allocation échoue,
** 	la fonction renvoie NULL.
** Param. #1 : Pointeur sur le premier maillon d’une liste.
** Param. #2 : L’adresse d’une fonction à appliquer à chaque maillon de la
** 	liste pour créer une nouvelle liste.
** Retour : La nouvelle liste.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*tmp;
	t_list	*new_elem;

	if (lst == NULL)
		return (NULL);
	tmp = f(lst);
	if ((new_elem = ft_lstnew(tmp->content, tmp->content_size)) == NULL)
		return (NULL);
	free(tmp);
	new_lst = new_elem;
	lst = lst->next;
	while (lst != NULL)
	{
		tmp = f(lst);
		if (!(new_elem->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		free(tmp);
		new_elem = new_elem->next;
		lst = lst->next;
	}
	return (new_lst);
}
