/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 22:45:02 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/18 23:03:27 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strndup(const char *s, size_t n)
{
	char	*str;
    size_t  len;

    len = ft_strlen(s);
    if (len > n)
	   str = (char *)malloc(sizeof(char) * (n + 1));
    else
   		str = (char *)malloc(sizeof(char) * (n));
	if (str == NULL)
		return (str);
	if (len > n)
		str[n + 1] = '\0';
   	str[n] = s[n];
    while (n--)
		str[n] = s[n];
	return (str);
}
