/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:24:35 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/19 15:24:31 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Alloue (avec malloc(3)) et retourne un tableau de chaînes de
** 	caractères “fraiches” (toutes terminées par un ’\0’, le tableau
**	également donc) résultant de la découpe de s selon le caractère
** 	c. Si l’allocation echoue, la fonction retourne NULL. Exemple :
** 	ft_strsplit("*salut*les***etudiants*", ’*’) renvoie
** 	le tableau ["salut", "les", "etudiants"].
** Param. #1 : La chaîne de caractères à découper.
** Param. #2 : Le caractère selon lequel découper la chaîne.
** Retour : Le tableau de chaînes de caractères “fraiches” résultant de la
** 	découpe.
*/

#include "libft.h"

static void	fillit(char ***tab, const char *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	j = 0;
	while (s[i] != '\0')
	{
		k = 0;
		while (s[i] != c && s[i])
		{
			(*tab)[j][k] = s[i];
			k++;
			i++;
		}
		(*tab)[j][k] = '\0';
		while (s[i] == c && s[i])
			i++;
		j++;
	}
}

static int	init(const char *s, char ***tab, char c)
{
	if (s == NULL)
		return (42);
	if (!(*tab = (char **)malloc(sizeof(char *) *
			(ft_count_words_c(s, c) + 1))))
		return (42);
	return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		len;
	int		j;

	if (init(s, &tab, c))
		return (NULL);
	i = 0;
	while (s[i] == c && s[i])
		i++;
	j = 0;
	while (s[i] != '\0')
	{
		len = 0;
		while (s[i] != c && s[i++])
			len++;
		if ((tab[j] = ft_strnew(len)) == NULL)
			return (NULL);
		j++;
		while (s[i] == c && s[i])
			i++;
	}
	fillit(&tab, s, c);
	tab[ft_count_words_c(s, c)] = 0;
	return (tab);
}
