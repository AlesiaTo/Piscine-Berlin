/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:59:06 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/21 15:59:56 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c < 97) || (c > 122))
			return (0);
		i++;
	}
	return (1);
}
/*
int	 main(void)
{
	char	string[] = "";
	printf("%d", ft_str_is_lowercase(string));
//	if (ft_str_is_lowercase(string) == 1)
//		printf("%s only lowercase", string);
//	else
//		printf("%s another characters", string);
}
*/
