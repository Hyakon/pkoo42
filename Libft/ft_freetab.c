/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 23:07:43 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/18 23:13:30 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_freetab(void *tab, size_t size)
{
    while(size--)
    {
        free(tab[size]);
    }
}