/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_zeros.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:30:22 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/27 11:43:21 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*fill_zeros(char *src)
{
	int	len;
	int	i;
	char	temp[13];

	len = ft_strlen(src);
	i = 0;
	if (len % 3)
	{
		while (i < 3 - (len % 3))
		{
			temp[i] = 48;
			i++;
		}
		i = 0;
		while (i < len)
		{
			temp[i + 3 - (len % 3)] = src[i];
			i++;
		}
		temp[i + 3 - (len % 3)] = '\0';
		src = ft_strcpy(src, temp);
	}
	return (src);
}

int main(void)
{
	char *str= "231564";
	printf("%s", fill_zeros(str));
	return 0;
}

