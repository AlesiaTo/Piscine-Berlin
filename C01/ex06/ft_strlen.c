/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:06:42 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/17 20:26:55 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	times;

	times = 0;
	while (*str != 0)
	{
		str++;
		times++;
	}
	return (times);
}
/*
int	main(void)
{
	char *s;
	s = "42 school";
	ft_strlen(s);
	printf("%s \n", s);
	printf("%d ", ft_strlen(s));
}*/
