/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkoo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:40:06 by pkoo              #+#    #+#             */
/*   Updated: 2018/12/03 17:43:01 by pkoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H


# define BUFF_SIZE 5
# include "Libft/libft.h"
# include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif
