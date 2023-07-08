/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:27:48 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/23 10:53:43 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{		
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<string.h>
#include<stdio.h>
int	main(void)
{
	char dest[23] = "I will enroll";
	char src[] = " 42 school";
	
	char *ptr = strcat(dest, src);

	printf("Original: %s\n", strcat(dest, src));
	printf("ptr:%s\n", ptr);
}*/
