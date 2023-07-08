/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_res.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:29:16 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/26 23:28:56 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

char	*ft_remove_extra(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strstr(char *str, char *to_find);
char	*dict(char *dict);

void	print_res(char numbers_array[15][15], int i, char *inp)
{
	int		j;
	char	*temp;

	j = 0;
	while (j < i)
	{
		temp = ft_remove_extra(ft_strstr(dict(inp), numbers_array[j]));
		if (temp == NULL)
			write (1, "Dict Error\n", 10);
		else
		{
			ft_putstr(temp);
			if (j < i - 1)
				ft_putchar(' ');
			j++;
		}
	}
}
