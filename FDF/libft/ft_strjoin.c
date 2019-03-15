/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:51:01 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/19 13:58:08 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Alloue (avec malloc(3)) et retourne une chaine de caractères
** 	“fraiche” terminée par un ’\0’ résultant de la concaténation
** 	de s1 et s2. Si l’allocation echoue, la fonction renvoie NULL.
** Param. #1 : La chaine de caractères préfixe.
** Param. #2 : La chaine de caractères suffixe.
** Retour : La chaine de caractère “fraiche” résultant de la concaténation
** 	des deux chaines.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (s1 == NULL && s2 != NULL)
	{
		if ((str = ft_strdup(s2)) == NULL)
			return (NULL);
		return (str);
	}
	if (s2 == NULL && s1 != NULL)
	{
		if ((str = ft_strdup(s1)) == NULL)
			return (NULL);
		return (str);
	}
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if ((str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))) == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
