/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:59:43 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/26 23:18:53 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	*fill_zeros(char *src);
char	*ft_get_100(char *dest, char *src);
char	*thousands(char *dest, char *src);
char	*millions(char *dest, char *src);
char	*billions(char *dest, char *src);

char	*split_num(char *dest, char *src)
{
	char	*num;
	char	*result;
	int		len;

	result = dest;
	num = fill_zeros(src);
	len = ft_strlen(num);
	if (len == 12)
		dest = billions(dest, num);
	else if (len == 9)
		dest = millions(dest, num);
	else if (len == 6)
		dest = thousands(dest, num);
	else
		dest = ft_get_100(dest, num);
	return (result);
}
