/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:45:01 by gfestin           #+#    #+#             */
/*   Updated: 2018/11/19 18:31:37 by gfestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str;
	const char	*str2;

	str = dst;
	str2 = src;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			str[len - 1] = str2[len - 1];
			len--;
		}
	}
	return (dst);
}
