/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 15:35:48 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/16 16:00:16 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Ajoute l’élément new en tête de la liste.
** Param. #1 : L’adresse d’un pointeur sur le premier maillon d’une liste.
** Param. #2 : Le maillon à ajouter en tête de cette liste.
** Retour : Rien.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *newi)
{
	newi->next = *alst;
	*alst = newi;
}
