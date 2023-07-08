/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:10:42 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/27 16:27:42 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_char_in_tab(char *tab, int size)

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	res;

	while (i < argc)
	{
		i = 0;
		while (argc && argv[i])
		{
			res = ft_strcmp(argv[i], argv[i + 1]);
			i++;
		}
		k++;
		write(1, "\n", 1);
	}
	return (0);
}
