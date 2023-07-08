/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:43:00 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/16 11:29:56 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int main(void)
{
	int k;
	int l;

	k = 42;
	l = 3;
	printf("%d %d \n", k, l);
	ft_ultimate_div_mod(&k, &l);
	printf("%d %d \n", k, l);
}*/
