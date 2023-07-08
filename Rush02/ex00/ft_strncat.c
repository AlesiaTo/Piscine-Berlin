/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:37:21 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/26 21:38:44 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (i < nb)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = ' ';
	dest[i + 1] = '\0';
	return (&dest[i + 1]);
}
