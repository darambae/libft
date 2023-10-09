/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:08:53 by dabae             #+#    #+#             */
/*   Updated: 2023/10/05 09:25:02 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	arr = (void *)malloc(nmemb * size);
	if (nmemb == 0 || size == 0 || !arr)
		return (NULL);
	if (arr)
		ft_bzero(arr, nmemb * size);
	return (arr);
}
