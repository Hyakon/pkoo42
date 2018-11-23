/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:47:39 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/21 17:04:00 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*res;
	const char	*str;

	res = (char *)dst;
	str = (const char *)src;
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		while (n--)
			res[n] = str[n];
	}
	return (dst);
}
