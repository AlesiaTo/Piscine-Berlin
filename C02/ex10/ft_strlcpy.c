/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:30:25 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/22 11:21:00 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!dest || !src)
		return (0);
	if (dest == 0)
		return (1);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])	
		i++;
	return (i);
}
/*
#include<stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char src[] = "42 school";
	char dest[2];
	printf("original: %zu\n ", strlcpy(dest,src, 3));
//	printf("ur copy:%d ", ft_strlcpy(dest,src, 3));
}*/
