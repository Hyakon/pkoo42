/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <pkoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:57:01 by pkoo              #+#    #+#             */
/*   Updated: 2018/11/19 17:01:28 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *tmp;

    if (!alst)
        return ;
    tmp = (*alst);
    while(*alst)
    {
        del((*alst)->content, (*alst)->content_size);
        free(*alst);
        (*alst) = (*alst)->next
    }
    tmp = NULL;
}
