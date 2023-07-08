/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:55:22 by arutsevi          #+#    #+#             */
/*   Updated: 2023/03/01 12:10:42 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(3, -2)); 
}*/
