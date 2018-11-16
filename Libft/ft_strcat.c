/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:36:37 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/13 16:01:22 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t len;
	size_t i;
	size_t j;

	j = 0;
	i = ft_strlen(dest);
	len = i + ft_strlen(src);
	while (i < len)
	{
		dest[i] = src[j++];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
