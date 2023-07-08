/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize111.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:25:13 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/21 14:29:11 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char ft_str_is_lowercase(char *str);
 16 
 17 char    *ft_strcapitalize(char *str)
 18 {
 19     int     i;
 20 //  char    c;
 21 
 22     i = 1;
 23     ft_str_is_lowercase(str);
 24     while (str[i] != '\0')
 25     {
 26     //  if(i == 0)
 27     //  {
 28         if(str[i] >= 65 && str[i] <= 90)
 29             str[i] = (str[i] + 32);
 30         }
 31         i++;    
 32     }
 33     if (str[0] >= 97 && str[0] <= 122)
 34         str[0] = (str[0] + 32);
 35     while (str[i] != '\0')
 36     {
 37         if ((str[i] >= ' ' && str[i] <= '?'))
 38             if(str[i+1] >= 97 && str[i +1] <= 122)
 39                 str[i + 1] = (str[i+1] + 32);
 40         i++;
 41     }
 42     return (str);
 43 }
 44 
 45 char    ft_str_is_lowercase(char *str)
 46 {
 47     int     i;
 48     char    c;
 49     
 50     i = 0;
 51     while (str[i] != '\0')
 52     {
 53         c = str[i];
 54         if ((c < 97) || (c > 122))
 55             
 56         i++;
 57     }
 58     return (*str);
 59 }*/

