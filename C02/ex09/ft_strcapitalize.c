/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:27:49 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/21 16:12:09 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cond;

	i = 0;
	cond = 1;
	ft_lowercase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (cond == 1)
				str[i] = str[i] -32;
			cond = 0;
		}
		else
			if (str[i] >= '0' && str[i] <= '9')
				cond = 0;
		else
			cond = 1;
		i++;
	}
	return (str);
}	
/*
int	main(void)
{
	char	s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s ", ft_strcapitalize(s));
}*/
