/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggiertzu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:00:19 by ggiertzu          #+#    #+#             */
/*   Updated: 2023/02/25 20:17:00 by ggiertzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<fcntl.h>
#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

char	*split_num(char *dest, char *src);

int main(void)
{
	char str[13] = "1324543542";
	char dest[63];
	char *ptr;

	printf("%s\n", str);
	printf("%s", split_num(dest, str));
	return (0);
}