/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:11:32 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 14:21:46 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description : Alloue (avec malloc(3)) et retourne une chaine de caractères
** 	“fraiche” terminée par un ’\0’ représentant l’entier n passé
** 	en paramètre. Les nombres négatifs doivent être gérés. Si l’allocation
** 	échoue, la fonction renvoie NULL.
** Param. #1 : L’entier à convertir en une chaine de caractères.
** Retour : La chaine de caractères représentant l’entier passé en paramètre.
*/

#include "libft.h"

static int	check_zero(int n, char **str)
{
	if (n == 0)
	{
		if ((*str = ft_strnew(1)) == NULL)
		{
			*str = NULL;
			return (-1);
		}
		**str = '0';
		return (42);
	}
	return (0);
}

static void	check_neg(long *cpy, char **str, int *i)
{
	if (*cpy < 0)
	{
		*str[0] = '-';
		*cpy *= -1;
		*i += 1;
	}
}

char		*ft_itoa(int n)
{
	char	*str;
	long	cpy;
	int		i;
	size_t	len;
	int		max;

	if (check_zero(n, &str))
		return (str);
	len = (size_t)ft_nbrlen(n);
	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	cpy = (long)n;
	i = 0;
	check_neg(&cpy, &str, &i);
	max = (cpy == 2147483648 ? 1 : 0);
	cpy = ft_revnbr((int)(cpy - max));
	while (i < (int)len)
	{
		str[i] = (cpy % 10) + '0';
		cpy /= 10;
		i++;
	}
	str[len - 1] += max;
	return (str);
}
