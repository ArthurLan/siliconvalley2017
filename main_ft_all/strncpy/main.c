/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:52:24 by alanter           #+#    #+#             */
/*   Updated: 2017/08/15 21:11:42 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

#include <stdio.h>
#include <string.h>

int main()
{
   char str1[80];
   char str2[80];

   ft_strncpy(str1, "lets try this really long string for exemple, just to see", 20);
   ft_strncpy(str2, "etedwehueffs", 7);

   puts(str1);
   puts(str2);
   
   return(0);
}
