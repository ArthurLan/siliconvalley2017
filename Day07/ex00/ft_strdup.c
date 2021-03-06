/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:38:41 by alanter           #+#    #+#             */
/*   Updated: 2017/08/17 22:16:48 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (++i && str[i] != 0)
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char*)malloc(sizeof(*dest) * ft_strlen(src));
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
