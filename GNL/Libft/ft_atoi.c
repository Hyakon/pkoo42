/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:20:27 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/13 16:32:27 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int sign;
	int i;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10;
		res = res + str[i] - '0';
		i++;
	}
	return (res * sign);
}
