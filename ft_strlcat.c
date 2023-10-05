/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:05:49 by dabae             #+#    #+#             */
/*   Updated: 2023/10/05 09:53:47 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(dst);
	i = 0;
	if (len_dst < size - 1)
	{
		while (len_dst + i < size - 1 && src[i])
		{
			dst[len_dst + i] = src[i];
		}
		dst[len_dst + i] = '\0';
	}
	return (len_dst + len_src);
}
