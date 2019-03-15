/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:16:52 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 23:02:49 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Alloue (avec malloc(3)) et retourne une zone de mémoire
** 	“fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation
** 	échoue, la fonction renvoie NULL.
** Param. #1 : La taille de la zone de mémoire à allouer.
** Retour : La zone de mémoire allouée.
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memory;

	if ((memory = malloc(size)) == NULL)
		return (NULL);
	ft_bzero(memory, size);
	return (memory);
}
