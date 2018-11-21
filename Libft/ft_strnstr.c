/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:48:27 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/21 17:05:51 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (needle[j] && (i + j) < len)
		{
			while (haystack[i + j] == needle[j] && (i + j) < len &&
				haystack[i + j])
				j++;
			if (!needle[j])
				return ((char *)&haystack[i]);
			else
			{
				j = 0;
				break ;
			}
		}
		i++;
	}
	return (NULL);
}
