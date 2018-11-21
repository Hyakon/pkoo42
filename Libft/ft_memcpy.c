/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:46:09 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/21 17:30:30 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*res;
	const char	*str;
	size_t		i;

	i = 0;
	res = (char *)dest;
	str = (const char *)src;
	while (i < n)
	{
		res[i] = str[i];
		i++;
	}
	return (dest);
}
