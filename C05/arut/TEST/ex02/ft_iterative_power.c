/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:39:01 by arutsevi          #+#    #+#             */
/*   Updated: 2023/03/01 12:08:43 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	while (power > 0)
	{
		i = nb * nb;
		power--;
	}
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 2));
	return (0);
}*/
