/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:46:26 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/21 17:26:20 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char *s, char (*f)(char))
{
	char	*new;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new = ft_strnew(len);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = f(*s);
		i++;
		s++;
	}
	return (new);
}
