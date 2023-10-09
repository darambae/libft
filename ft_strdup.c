/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:32:16 by dabae             #+#    #+#             */
/*   Updated: 2023/10/09 17:12:16 by darambae         ###   ########.fr       */
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
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n",ft_strdup(argv[1]));
	return (0);
}
