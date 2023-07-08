/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:48:21 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/28 21:12:41 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	if (nb == 0)
	{
		f = 1;
		return (f);
	}
	if (nb < 0)
		return (0);
	f = 1;
	while (nb > 1)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d \n", ft_iterative_factorial(5));
}*/
