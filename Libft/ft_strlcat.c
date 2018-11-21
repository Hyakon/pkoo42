/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:33:08 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/21 17:19:03 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t len_dst;
	size_t len_src;

	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dst >= n)
		return (len_src + n);
	ft_strncpy(dest + len_dst, (void *)src, n - len_dst);
	dest[n - 1] = '\0';
	return (len_dst + len_src);
}
