/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:31:24 by dabae             #+#    #+#             */
/*   Updated: 2023/10/12 15:18:17 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	len;

	len = (unsigned int)ft_strlen(s);
	if (!s)
		return ;
	write(fd, s, len);
	write(fd, "\n", 1);
}
