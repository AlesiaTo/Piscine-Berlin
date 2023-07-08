/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:19:44 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/21 16:02:20 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c < 32) || (c > 127))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char pr[] = "";
	printf("%d ", ft_str_is_printable(pr));
}*/
