/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:48:41 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/16 16:07:59 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	while (len)
	{
		if (s[len] == c)
			return ((char *)&(s[len]));
		len--;
	}
	if (s[len] == c)
		return ((char *)&(s[len]));
	return (NULL);
}
