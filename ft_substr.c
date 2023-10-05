/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:46:11 by dabae             #+#    #+#             */
/*   Updated: 2023/10/05 09:26:21 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	if (ft_strlen(s) <= start)
	{
		arr = (char *)malloc(1);
		if (!arr)
			return (NULL);
		arr[0] = '\0';
		return (arr);
	}
	arr = (char *)malloc(len + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		arr[i] = s[start + i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
