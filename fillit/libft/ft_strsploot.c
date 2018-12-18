/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsploot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 12:33:21 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/19 15:32:16 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Alloue (avec malloc(3)) et retourne une liste de chaînes de
** 	caractères “fraiches” (toutes terminées par un ’\0’)
** 	résultant de la découpe de s selon le caractère
** 	c. Si l’allocation echoue, la fonction retourne NULL. Exemple :
** 	ft_strsplit("*salut*les***etudiants*", ’*’) renvoie
** 	le tableau {"salut", "les", "etudiants"}.
** Param. #1 : La chaîne de caractères à découper.
** Param. #2 : Le caractère selon lequel découper la chaîne.
** Retour : La liste de chaînes de caractères “fraiches” résultant de la
** 	découpe.
*/

#include "libft.h"

t_list		*ft_strsploot(char const *s, char c)
{
	t_list	*begin;
	t_list	*tmp;
	int		i;
	int		len;
	int		b;

	begin = NULL;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	b = 0;
	while (s[i] != '\0')
	{
		len = 0;
		while (s[i] != c && s[i++])
			len++;
		if ((tmp = ft_lstnew(ft_strsub(s, i - len, len), len + 1)) == NULL)
			return (NULL);
		if (b++ == 0)
			begin = tmp;
		tmp = tmp->next;
		while (s[i] == c && s[i])
			i++;
	}
	return (begin);
}
