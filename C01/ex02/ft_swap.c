/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <arutsevi@arutsevi@student.de     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:03:47 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/16 11:32:13 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int i;
	int f;

	i = 35;
	f = 86;
	printf("%d %d \n", i, f); 
	ft_swap(&i, &f);
	printf("%d %d \n", i, f);
	return(0);
}*/
