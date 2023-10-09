/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:32:16 by dabae             #+#    #+#             */
/*   Updated: 2023/10/05 09:55:50 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;
	int		i;

	if (!s)
		return (NULL);
	arr = (char *)malloc(ft_strlen(s) + 1);
	if (arr)
	{
		i = 0;
		while (s[i])
		{
			arr[i] = s[i];
			i++;
		}
		arr[i] = '\0';
	}
	else
		return (NULL);
	return (arr);
}
