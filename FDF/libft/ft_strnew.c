/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:26:30 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/19 12:48:43 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Alloue (avec malloc(3)) et retourne une chaine de caractère
** 	“fraiche” terminée par un ’\0’. Chaque caractère de la chaine
** 	est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie
** 	NULL.
** Param. #1 : La taille de la chaine de caractères à allouer.
** Retour : La chaine de caractères allouée et initialisée à 0.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;
	size_t	i;

	if ((newstr = (char *)malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		newstr[i] = '\0';
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
