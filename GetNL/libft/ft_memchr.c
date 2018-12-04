/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:29:43 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/16 15:10:52 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	x;

	x = (unsigned char)c;
	i = 0;
	str = (unsigned char *)s;
	while ((i < n))
	{
		if (str[i] == x)
			return ((void *)&(str[i]));
		i++;
	}
	return (NULL);
}
