/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:23:19 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/09 15:27:42 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Applique la fonction f à chaque caractère de la chaine de
** 	caractères passée en paramètre pour créer une nouvelle chaine
** 	“fraiche” (avec malloc(3)) résultant des applications successives
** 	de f.
** Param. #1 : La chaine de caractères sur laquelle itérer.
** Param. #2 : La fonction à appeler sur chaque caractère de s.
** Retour : La chaine “fraiche” résultant des applications successives de f.
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (s == NULL)
		return (NULL);
	if ((str = (char *)malloc((ft_strlen(s) + 1) * sizeof(*str))) == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
