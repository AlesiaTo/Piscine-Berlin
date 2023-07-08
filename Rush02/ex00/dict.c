/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 22:23:05 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/27 11:45:03 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char	*prepare_string(char *str);

char	*dict(char *dict)
{
	int		fd;
	char	*str;
	int		pos;

	str = malloc(sizeof(char) * 1000);
	dict = "./numbers.dict";
	fd = open(dict, O_RDONLY);
	pos = read(fd, str, 2000);
	return (prepare_string(str));
}
