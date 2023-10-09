/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:58:54 by dabae             #+#    #+#             */
/*   Updated: 2023/10/05 09:11:30 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_count_digit(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	if (n > 9)
	{
		while (n > 9)
		{
			n /= 10;
			count++;
		}
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		count;

	count = ft_count_digit(n);
	res = (char *)malloc(sizeof(char) * (ft_count_digit(n) + 1));
	if (!res)
		return (NULL);
	if (n < 0)
		res[0] = '-';
	res[count] = '\0';
	while (count--)
	{
		res[count] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}
