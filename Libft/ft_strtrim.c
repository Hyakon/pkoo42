/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:49:39 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/18 14:42:10 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	while (s && ft_iswhitespaces(*s))
		s++;
	len = ft_strlen(s) - 1;
	while(ft_iswhitespaces(s[len]))
		len--;
	str = (char *)malloc(sizeof(char) * (len + 2));
	i = 0;
	ft_strncpy(str, s, len + 1);
	str[len + 2] = '\0';
	return (str);
}
