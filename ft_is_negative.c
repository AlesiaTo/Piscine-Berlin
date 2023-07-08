/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <arutsevi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:36:38 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/14 11:36:32 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;
	char	p;

	c = 'N';
	p = 'P';
	if (n >= 0)
	{
		write (1, &p, 1);
	}
	else
	{
		write(1, &c, 1);
	}
}