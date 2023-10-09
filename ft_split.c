/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:14:45 by dabae             #+#    #+#             */
/*   Updated: 2023/10/05 09:16:55 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_count_arr(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

static	char	*ft_add_arr(const char *str, int start, int end)
{
	char	*arr;
	int		i;

	i = 0;
	arr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!arr)
		return (NULL);
	while (start < end)
		arr[i++] = str[start++];
	arr[i] = '\0';
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arrs;
	size_t	i;
	size_t	j;
	size_t	z;

	arrs = (char **)malloc(sizeof(char *) * (ft_count_arr(s, c) + 2));
	if (!arrs)
		return (NULL);
	i = 0;
	z = -1;
	while (s[i])
	{
		j = i;
		while (s[i] != c && s[i])
			i++;
		if (i > j)
			arrs[z++] = ft_add_arr(s, j, i);
		i++;
	}
	arrs[z] = NULL;
	return (arrs);
}
