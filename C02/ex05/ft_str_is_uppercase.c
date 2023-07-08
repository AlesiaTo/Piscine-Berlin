/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:05:08 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/21 16:01:21 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c < 65) || (c > 90))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	 string[] = "d";
	printf("%d", ft_str_is_uppercase(string));
}*/
