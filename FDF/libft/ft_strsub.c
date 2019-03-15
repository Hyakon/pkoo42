/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:34:04 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/19 12:48:39 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un
** 	tronçon de la chaine de caractères passée en paramètre. Le
** 	tronçon commence à l’index start et à pour longueur len. Si
** 	start et len ne désignent pas un tronçon de chaine valide,
** 	le comportement est indéterminé. Si l’allocation échoue, la
** 	fonction renvoie NULL.
** Param. #1 : La chaine de caractères dans laquelle chercher le tronçon à
** 	copier.
** Param. #2 : L’index dans la chaine de caractères où débute le tronçon à
** 	copier.
** Param. #3 : La longueur du tronçon à copier.
** Retour : Le tronçon.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if ((str = (char *)malloc((len + 1) * sizeof(*str))) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
