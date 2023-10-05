/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:23:39 by dabae             #+#    #+#             */
/*   Updated: 2023/10/05 09:24:37 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*res;
	size_t	i;

	res = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (res[i] == (unsigned char)c)
			return ((void *)&res[i]);
		i++;
	}
	return (NULL);
}
