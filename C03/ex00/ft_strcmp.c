/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:29:16 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/27 15:36:54 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

#include<stdio.h>
#include<string.h>
int	main(void)
{ 
//	int ret;
//	ret = strcmp(s1, s2
	char s1[] = "Iam";
	char s2[] = "Ime";
	printf("Mine: %d \n", ft_strcmp(s1, s2));
//	printf("Original: %d \n", strcmp(s1, s2));	
}
