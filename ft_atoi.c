/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:28:28 by dabae             #+#    #+#             */
/*   Updated: 2023/10/09 15:27:51 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}

	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h> 

int	main()
{

	printf("%d = %d\n",ft_atoi("-4287942"), atoi("-4287942"));
	printf("%d = %d\n",ft_atoi("--4287942"), atoi("--4287942"));
	printf("%d = %d\n",ft_atoi("-2147483648"), atoi("-2147483648"));
	printf("%d = %d\n",ft_atoi("++316746"), atoi("++316746"));
	return (0);
}
*/
