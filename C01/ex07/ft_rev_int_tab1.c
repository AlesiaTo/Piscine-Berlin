/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arutsevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:08:23 by arutsevi          #+#    #+#             */
/*   Updated: 2023/02/17 20:12:15 by arutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;   //number of position starting from left [0]
    int k;   //number of position starting from right [4]

    i = 0;
 23     k = size - 1;
 24     while (i < k)
 25     {
 26         temp = tab[i];
 27         tab[i] = tab[k];
 28         tab[k] = temp;
 29         i++;
 30         k--;
 31     }
 32 //  printf("%d" , size);
 33 }
 34 
 35 int main(void)
 36 {
 37     int tab [5] = {0, 1, 2, 3, 4};
 38     int i;
 39     char c;
 40 //  tab[] = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10;
 41     ft_rev_int_tab(tab, 5);
 42     i = 0;
 43     while(i < 5)
 44     {
 45         c = tab[i] +'0';
 46         write(1, &c, 1);
 47         i++;
 48     }
 49 //  printf("%d " , ft_rev_int_tab(tab, size));
 50 }
		it woks!!
