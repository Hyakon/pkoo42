/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:47:08 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/13 16:03:04 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*res;
	char	*str;
	size_t	i;

	i = 0;
	res = (char *)dest;
	str = (char *)src;
	while (i < n)
	{
		res[i] = str[i];
		if (str[i++] == c)
		{
		  return ((void *)&(res[i]));
		}
	}
	return (NULL);
}
