/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:49:29 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/16 15:25:41 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	while (len--)
		str[len] = s[start + len];
	return (str);
}
