/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:52:24 by alanter           #+#    #+#             */
/*   Updated: 2017/08/15 19:30:05 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

#include <stdio.h>
#include <string.h>

int main()
{
   char str1[80];
   char str2[5];

   ft_strcpy(str1, "lets try this really long string for exemple, just to see");
   ft_strcpy(str2, "etedwehueffs");

   puts(str1);
   puts(str2);
   
   return(0);
}
