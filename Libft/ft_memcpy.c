/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:46:09 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/21 17:57:52 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*res;
	const char	*str;
	size_t		i;

	i = 0;
	res = (char *)dst;
	str = (const char *)src;
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
	return (dst);
}
