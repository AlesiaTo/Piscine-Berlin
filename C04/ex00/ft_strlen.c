/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:19:39 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/23 16:23:40 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include<stdio.h>
int	main(void)
{
	char s[] = "Belarus";
	ft_strlen(s);
	printf("%d\n", ft_strlen(s));
}*/
