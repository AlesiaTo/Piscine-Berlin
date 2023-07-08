#include	<fcntl.h>
#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

// compute string length
int ft_strlen(char *str)
{
    int i;

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
    int i;

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
