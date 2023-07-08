/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <arutsevi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:25:40 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/14 11:37:40 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_char(char start, char middle, char last)
{
	write(1, &start, 1);
	write(1, &middle, 1);
	write(1, &last, 1);
}

void	ft_print_comb(void)
{
	char	start;
	char	middle;
	char	last;

	start = 48;
	while (start <= 55)
	{
		middle = start + 1;
		while (middle <= 56)
		{
			last = middle + 1;
			while (last <= 57)
			{
				ft_print_char(start, middle, last);
				if (!(start == 55 && middle == 56 && last == 57))
				{
					write(1, ", ", 2);
				}
				last++;
			}
			middle++;
		}
		start++;
	}
}
