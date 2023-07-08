/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:21:37 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/21 15:56:56 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= 48) && (c <= 57)))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	st[] = "s";
	printf("%d ", ft_str_is_numeric(st));

//	if (ft_str_is_numeric(st) == 1)
//		printf("%s only digits", st);
//	else
//		printf("%s another character", st);
}*/
