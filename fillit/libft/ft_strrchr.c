/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:20:08 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 20:22:37 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	s += i;
	while (i >= 0)
	{
		if (*s == (char)c)
			break ;
		s -= 1;
		i--;
	}
	if (i == -1)
		return (NULL);
	return ((char *)s);
}
