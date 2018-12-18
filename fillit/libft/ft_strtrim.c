/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:52:00 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/15 13:45:57 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Alloue (avec malloc(3)) et retourne une copie de la chaine
** 	passée en paramètre sans les espaces blancs au debut et à la
** 	fin de cette chaine. On considère comme espaces blancs les
** 	caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces
** 	blancs au début ou à la fin, la fonction renvoie une copie de
** 	s. Si l’allocation echoue, la fonction renvoie NULL.
** Param. #1 : La chaine de caractères à trimmer.
** Retour : La chaine de caractère “fraiche” trimmée ou bien une copie
** 	de s sinon.
*/

#include "libft.h"

static int	check_end(const char *s, int *i, char **str, int j)
{
	int		k;

	k = 0;
	while (ft_isspace(s[*i]) && s[*i])
	{
		*i += 1;
		k++;
		if (s[*i] == '\0')
		{
			(*str)[j] = '\0';
			return (42);
		}
		if (!ft_isspace(s[*i]))
		{
			*i -= k;
			break ;
		}
	}
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	if ((str = ft_strnew(ft_strlentrim(s))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (ft_isspace(s[i]) && s[i] != '\0')
		i++;
	while (s[i])
	{
		if (check_end(s, &i, &str, j))
			return (str);
		str[j] = s[i];
		j++;
		i++;
	}
	return (str);
}
