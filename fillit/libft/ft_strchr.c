/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:16:42 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/13 20:21:43 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		len;
	int		i;

	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (*s == (char)c)
			break ;
		s += 1;
		i++;
	}
	if (i == len + 1)
		return (NULL);
	return ((char *)s);
}
