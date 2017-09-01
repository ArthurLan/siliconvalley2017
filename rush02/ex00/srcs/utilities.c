/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 21:16:23 by jthompki          #+#    #+#             */
/*   Updated: 2017/08/27 23:07:03 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush_02.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int		i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	if (src[i] != '\0')
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
	}
	else
		return (dest);
}

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0' && s2[index] != '\0')
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
