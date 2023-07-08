/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:28:04 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/26 11:46:11 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}	
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	if (!(sign % 2))
		return (res);
	return (-res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str[] = " --+-+1234ab567";
	printf("My result: %d\n", ft_atoi(str));
//	char	str1[] = " ---+--+1234ab567";
//	printf("Original: %d\n", atoi(str1));
	return (0);
}*/
