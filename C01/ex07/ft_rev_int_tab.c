/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:29:29 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/17 20:39:00 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	k;

	i = 0;
	k = size - 1;
	while (i < k)
	{
		temp = tab[i];
		tab[i] = tab[k];
		tab[k] = temp;
		i++;
		k--;
	}
}
/*
int	main(void)
{
	int	tab [5] = {0, 1, 2, 3, 4};
	int i;
	char c;
	ft_rev_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		c = tab[i] +'0';
		write (1, &c, 1);
		i++;
	}
}*/
