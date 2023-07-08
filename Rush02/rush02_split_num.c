#include	<fcntl.h>
#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

int     ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*fill_zeros(char *src);
char    *ft_str1cat(char *dest, char *src);
char    *ft_strncat(char *dest, char *src, unsigned int nb);

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
