/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:49:04 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/23 19:50:55 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned	int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

#include<stdio.h>
#include<string.h>

int	main(void)
{
//	char s1[] = "ABcdE";
//	char s2[] = "ABCDE";
//	char s3[] = "ABcdE";
//	char s4[] = "ABCDE";

//	printf("Mine: %d\n", ft_strncmp(s1, s2, 0));
//	printf("Original: %d\n", strncmp(s3, s4, 0));
	printf("%i\n", ft_strncmp("Hallo", "Halz", 5));
	printf("%i\n", strncmp("Hallo", "Halz", 5));
	printf("%i\n", ft_strncmp("Hal", "Hallo", 5));
	printf("%i\n", strncmp("Hal", "Hallo", 5));
	printf("%i\n", ft_strncmp("", "", 5));
	printf("%i\n", strncmp("", "", 5));
}
