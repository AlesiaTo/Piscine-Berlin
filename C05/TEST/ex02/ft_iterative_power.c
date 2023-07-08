/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:39:01 by arutsevi          #+#    #+#             */
/*   Updated: 2023/03/01 15:27:12 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb;
	while (power > 1)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(-3, 5));
	return (0);
}*/
