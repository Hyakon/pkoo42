/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:48:07 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/21 17:07:21 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;

	new = (char *)malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	while (size)
		new[size--] = '\0';
	new[size] = '\0';
	return (new);
}
