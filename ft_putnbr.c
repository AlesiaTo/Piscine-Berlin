/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <arutsevi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:57:24 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/23 16:28:31 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;
	while(nb < 0)
	{
		c = (nb / 10) + '0';
		ft_putchar('-');
		ft_putchar(c);
	}	
		
	
	int i = 0;	 
	int n = nb; 
		while(n > 0)
		{
			n = n / 10;
			i++;
		}
		while (i > 0)
	{
		c = (nb / 10) + '0';
        ft_putchar('-');
        ft_putchar(c);
	}
}

int main(void)
{
	ft_putnbr(42);
	ft_putnbr(-42);
	ft_putnbr(0);
	return(0);
}
