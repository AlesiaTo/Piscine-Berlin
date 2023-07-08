/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:45:45 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/21 15:52:55 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	source[] = "Copy";
	char	destination[5];

	write(1, ft_strncpy(destination, source, 2), 5);
}
//n - copy length limit 
//27- save \n in the end
//28- go to another char*/
