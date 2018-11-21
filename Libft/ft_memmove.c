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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*res;
	const char	*str;

	res = (char *)dest;
	str = (const char *)src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			res[n] = str[n];
	}
	return (dest);
}
