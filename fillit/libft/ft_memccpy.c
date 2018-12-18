/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:37:09 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/16 17:32:32 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;
	const unsigned char	*str2;

	i = 0;
	str = dst;
	str2 = src;
	while (i < n)
	{
		if (str2[i] == (unsigned char)c)
		{
			str[i] = str2[i];
			i++;
			return ((void *)&str[i]);
		}
		str[i] = str2[i];
		i++;
	}
	return (NULL);
}
