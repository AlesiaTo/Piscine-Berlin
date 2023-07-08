/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:05:04 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/27 10:47:40 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/

char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_str1cat(char *dest, char *src);

char	*ft_get_100(char *dest, char *src)
{
	if (src[0] != 48)
	{
		dest = ft_strncat(dest, &src[0], 1);
		dest = ft_strncat(dest, "100", 3);
	}
	if (src[1] == 49)
	{
		dest = ft_strncat(dest, &src[1], 2);
	}
	else if (src[1] != 48)
	{
		dest = ft_str1cat(dest, &src[1]);
		dest = ft_strncat(dest, "0", 1);
	}
	if (src[0] == 48 && src[1] == 48 && src[2] == 48)
		return (dest);
	if (src[1] != 49)
		dest = ft_strncat(dest, &src[2], 1);
	return (dest);
}
