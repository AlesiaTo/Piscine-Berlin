/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:45:26 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/21 10:48:14 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a = 105;
	int b = 20;
	int div;
	int mod;

	div = 1;
	mod = 5;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d %d %d \n", a, b, div, mod);
}*/
