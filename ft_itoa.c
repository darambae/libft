/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:58:54 by dabae             #+#    #+#             */
/*   Updated: 2023/10/09 16:36:21 by dabae            ###   ########.fr       */
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
	long int	tmp;

	tmp = n;
	count = ft_count_digit(tmp);
	res = (char *)malloc(sizeof(char) * (count + 1));
	if (!res)
		return (NULL);
	if (tmp < 0)
	{
		res[0] = '-';
		tmp *= -1;
	}
	res[count] = '\0';
	while (count--)
	{
		res[count] = tmp % 10 + '0';
		tmp /= 10;
	}
	return (res);
}

#include <stdio.h>
int	main()
{
	printf("%s\n", ft_itoa(34235));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483648));
	printf("%s\n", ft_itoa(0));
	return (0);
}
