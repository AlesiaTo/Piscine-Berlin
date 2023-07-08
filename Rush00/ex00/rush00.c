/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <arutsevi@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:44:52 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/12 20:09:08 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char curr_char);

void	ft_print_vertex(int x_pos, int y_pos)
{
	char	lt_vertix_char;
	char	rt_vertix_char;
	char	lb_vertix_char;
	char	rb_vertix_char;

	lt_vertix_char = 'o';
	rt_vertix_char = 'o';
	lb_vertix_char = 'o';
	rb_vertix_char = 'o';
	if (x_pos == 1 && y_pos == 1)
	{
		ft_putchar(lt_vertix_char);
	}
	if (x_pos > 1 && y_pos == 1)
	{
		ft_putchar(rt_vertix_char);
	}
	if (x_pos == 1 && y_pos > 1)
	{
		ft_putchar(lb_vertix_char);
	}
	if (x_pos > 1 && y_pos > 1)
	{
		ft_putchar(rb_vertix_char);
	}
}

void	ft_print_edge(int y_pos, int y)
{
	char	edge_vert_char;
	char	edge_horiz_char;

	edge_vert_char = '|';
	edge_horiz_char = '-';
	if (y_pos == y || y_pos == 1)
	{
		ft_putchar(edge_horiz_char);
	}
	else
	{
		ft_putchar(edge_vert_char);
	}
}

void	ft_print_char(int x_pos, int y_pos, int x, int y)
{
	if (x_pos == x || x_pos == 1)
	{
		if (y_pos == y || y_pos == 1)
		{
			ft_print_vertex(x_pos, y_pos);
		}
		else
		{
			ft_print_edge(y_pos, y);
		}
	}
	else
	{
		if (y_pos == y || y_pos == 1)
		{
			ft_print_edge(y_pos, y);
		}
		else
		{
			write(1, " ", 1);
		}
	}
}

void	rush(int x, int y)
{
	int	y_pos;
	int	x_pos;

	y_pos = 1;
	if (x > 0 && y > 0)
	{
		while (y_pos <= y)
		{
			x_pos = 1;
			while (x_pos <= x)
			{
				ft_print_char(x_pos, y_pos, x, y);
				x_pos = x_pos + 1;
			}
			write(1, "\n", 1);
			y_pos = y_pos + 1;
		}
	}
}
