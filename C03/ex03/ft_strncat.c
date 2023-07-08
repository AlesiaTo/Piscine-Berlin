/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:52:51 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/23 10:59:27 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
	char	dest[30] = "I will enroll";
	char	src[] = " 42 school";
	char    dest1[30] = "I will enroll";
    char    src1[] = " 42 school";

	char *ptr = ft_strncat(dest, src, 3);

	printf("Original: %s\n", strncat(dest1, src1,3));
	printf("Mine: %s\n", ptr);
}*/
