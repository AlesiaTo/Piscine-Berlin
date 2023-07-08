/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:27:54 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/23 15:02:39 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while ((str[i + j] == to_find[j]) && (str[i + j] != '\0'))
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
int	 main(void)
{
	char	str[20] = "I will pass the exam";
	char	to_find[3] = "pa";
	ft_strstr(str, to_find);

	printf("Mine: %s\n", ft_strstr(str, to_find));
	char    str1[20] = "I will pass the exam";
    char    to_find1[3] = "pa";
	printf("Original: %s\n", strstr(str1, to_find1));

//	char	error[] = "not";
//	char	*fail = strstr(str, error);
//	if (fail == NULL)
// 		printf("fail\n");
}*/
