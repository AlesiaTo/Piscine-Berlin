/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:44:59 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/26 23:15:17 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*my_strtok(char *str, const char *delim)
{
	static char *ptr;
	const char *d;
	char *token_start;

	if (str)
		ptr = str;
	if (*ptr == '\0')
		return (0);
	token_start = ptr;
	while (*ptr != '\0')
	{
		d = delim;
		while (*d != '\0')
		{
			if (*ptr == *d)
			{
				*ptr = '\0';
				ptr++; 
				if (*token_start == '\0')
				{
					token_start = ptr;
					continue;
				}
				return (token_start);
			}
			d++;
		}
		ptr++;
	}
	if (*token_start == '\0')
	{
	return (0);
	}
	return (token_start);
}
