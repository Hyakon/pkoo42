/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:29:41 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/13 16:00:41 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	int		i;
	char	*str;

	i = 0;
	size = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (str);
	while (i < size)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
