/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:18:54 by atrako            #+#    #+#             */
/*   Updated: 2023/02/24 19:18:55 by atrako           ###   ########.fr       */
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
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
    	while (str[i])
		i++;
	return (i);
}
// copy string from src to dest and put null terminator at end
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// fill array with leading zeros, so (array lenght) % 3 == 0
char	*fill_zeros(char *src)
{
	int	len;
	int	i;
	char	temp[13];

	len = ft_strlen(src);
	i = 0;
	if (len % 3)
	{
		while (i< 3 - (len % 3))
		{
			temp[i] = 48;
			i++;
		}
		i = 0;
		while (i < len)
		{
			temp[i + 3 - (len % 3)] = src[i];
			i++;
		}
		temp[i + 3 - (len % 3)] = '\0';
		src = ft_strcpy(src, temp);
	}
	return (src);
}

// add single char and null terminator to end of array, return pointer to end
char *ft_str1cat(char *dest, char *src)
{
    dest[0] = src[0];        
	dest[1] = '\0';
	return (&dest[1]);
}

// append nb elements of string and \0 to dest, return pointer to end
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;

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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{	
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i + j + 1]);
			j++;
		}
		i++;
	}
	return (0);
}

char	*ft_remove_extra(char *str)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == ':')
			i++;
		j = i;
		while (str[i] != '\n')
			i++;
		str[i] = '\0';
	}
	return (&str[j]);
}


int	check_input(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

// split three digits into dict readable string
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


void ft_putchar(char c)
{
	write(1, &c, 1);
}
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	while (dest[i])
		i++;
	k = 0;
	while (src[k])
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}


char *my_strtok(char *str, const char *delim)
{
	static char *ptr;
	const char *d;
	char *token_start;
	
	if (str != NULL)
	{
		ptr = str;
	}
	if (*ptr == '\0')
	{
		return NULL;
	}
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
		return NULL;
	}
	return token_start;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*
void	process_input(char *argv)
{
	char	*r;

	r = split_num(dest, argv);
}*/

char	*dict(char *dict)
{
	int		fd;
	char		*str;
	int		pos;
	
	str = malloc(sizeof(char) * 1000);
	dict = "./numbers.dict";
	fd = open(dict, O_RDONLY);
	pos = read(fd, str, 1000);
	return (str);
}

void	print_res(char numbers_array[15][15], int i,char *inp)
{
	int	j;
	char	*temp;
	
	j = 0;
	while (j < i)
	{
	temp = ft_remove_extra(ft_strstr(dict(inp), numbers_array[j]));
	if (temp == NULL)
		write (1,"Dict Error\n", 10);
	else
	{	ft_putstr(temp);
		if (j < i - 1)
		ft_putchar(' ');
	j++;
	}
	}
}
int	main(int argc, char *argv[])
{
	char	dest[63];
	int	i;
	char	*token;
	char	*delim = " ";
    	char	numbers_array[15][15];

 
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
	return(0); 
}
