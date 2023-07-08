/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:39:41 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/21 15:55:29 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122))))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char string[] = "";
	printf("%d ", ft_str_is_alpha(string));
	if (ft_str_is_alpha(string) == 1)
		printf("%s only alphabet", string);
	else
		printf("%s another symbols", string);
}
//      if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
*/
