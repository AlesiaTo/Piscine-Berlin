/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:46:35 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/27 12:28:30 by arutsevi         ###   ########.fr       */
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
	int	k;

	k = 1;
	while (k < argc)
	{
		i = 0;
		while (argv[k][i])
		{
			ft_putchar(argv[k][i]);
			i++;
		}
		write (1, "\n", 1);
		k++;
	}
	return (0);
}
