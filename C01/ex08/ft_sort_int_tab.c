/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:57:12 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/21 10:41:57 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	b;
	int	c;

	i = 0;
	c = size - 1;
	while (i < c)
	{
		a = 0;
		while (a < (c - i))
		{
			if (tab[a] > tab[a + 1])
			{
				b = tab[a];
				tab[a] = tab[a +1];
				tab[a + 1] = b;
			}
			a++;
		}
		i++;
	}
}

/*ft_putnbr(int nb)
{
	char	c;
	if (nb < 0 )
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write (1, &c, 1);
	}
	else
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
}

void	ft_print_array(int *arr, int n)
{
	int	i;

	i = 0;
	while(i < n)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}*/

int	main(void)
{
	int	i[] = {8,2,11,3,27,6,9};
	ft_sort_int_tab(i, 7);
	for (i = 0; i < 7; i++)
	{
		printf("%d ", ft_sort_int_tab(i, 7));
	}
//	printf("%d \n", tab);
//	int	q;
/*	while (i > 0)
	{
		write (1, &i, 1);
		i++;
	}*/

	//ft_print_array(i, 7);
}	
/*
i to count sorted boxes;
a for the position in array;
b save the number value
c for better understanding
27 - is this the end of array?
29 - condition to reverse

*/
