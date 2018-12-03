/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:49:09 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/21 16:57:33 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (needle[j])
		{
			while (haystack[i + j] == needle[j] && haystack[i + j])
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
