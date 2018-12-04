/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:49:39 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/21 17:25:54 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	len;

	if (!s)
		return (NULL);
	while (s && *s && ft_iswhitespaces(*s))
		s++;
	len = ft_strlen(s);
	while (ft_iswhitespaces(s[len - 1]) && len > 0)
		len--;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, s, len + 1);
	str[len] = '\0';
	return (str);
}
