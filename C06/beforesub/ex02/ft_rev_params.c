/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 23:24:08 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/27 16:29:17 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc - 1;
	if (argc < 1)
		return (1);
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] && argc)
		{
			ft_putchar(argv[j][i]);
			i++;
		}	
		write (1, "\n", 1);
		j--;
	}
	return (0);
}
