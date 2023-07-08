/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:18:54 by atrako            #+#    #+#             */
/*   Updated: 2023/02/26 22:52:36 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<fcntl.h>
#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

void	ft_putstr(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*ft_remove_extra(char *str);
char	*ft_strcat(char *dest, char *src);

// compute string length
int		ft_strlen(char *str);

// copy string from src to dest and put null terminator at end
char	*ft_strcpy(char *dest, char *src);

// fill array with leading zeros, so (array lenght) % 3 == 0
char	*fill_zeros(char *src);

// add single char and null terminator to end of array, return pointer to end
char	*ft_str1cat(char *dest, char *src)
{
	dest[0] = src[0];
	dest[1] = '\0';
	return (&dest[1]);
}

// append nb elements of string and \0 to dest, return pointer to end
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
char	*ft_remove_extra(char *str);
int		check_input(char *str);

// split three digits into dict readable string
char	*ft_get_100(char *dest, char *src);

// get the last six digits
char	*thousands(char *dest, char *src)
{
	dest = ft_get_100(dest, src);
	dest = ft_strncat(dest, "1000", 4);
	dest = ft_get_100(dest, &src[3]);
	return (dest);
}

// get the last nine digits
char	*millions(char *dest, char *src)
{
	dest = ft_get_100(dest, src);
	dest = ft_strncat(dest, "1000000", 7);
	dest = thousands(dest, &src[3]);
	return (dest);
}

// get the last 12 digits
char	*billions(char *dest, char *src)
{
	dest = ft_get_100(dest, src);
	dest = ft_strncat(dest, "1000000000", 10);
	dest = millions(dest, &src[3]);
	return (dest);
}

// split input string into dict readable string
char	*split_num(char *dest, char *src);
void	ft_putchar(char c);
char	*ft_strcat(char *dest, char *src);
char	*my_strtok(char *str, const char *delim);
void	ft_putstr(char *str);
char	*prepare_string(char *str);
char	*dict(char *dict);
void	print_res(char numbers_array[15][15], int i, char *inp);

int	main(int argc, char *argv[])
{
	char	dest[63];
	int		i;
	char	*token;
	char	*delim;
	char	numbers_array[15][15];

	delim = " ";
	if (argc == 0)
		return (0);
	else if (check_input(argv[1]) != 1)
		return (write (1, "error", 5));
	i = 0;
	token = my_strtok(split_num(dest, argv[1]), delim);
	while (token != NULL)
	{
		ft_strcpy(numbers_array[i], token);
		token = my_strtok(NULL, delim);
		i++;
	}
	print_res(numbers_array, i, argv[2]);
	return (0);
}
