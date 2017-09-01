/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_str_realloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 11:21:19 by nmei              #+#    #+#             */
/*   Updated: 2017/08/29 13:36:22 by nmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "bsq_read_utils.h"

/*
**	bsq_str_realloc.c
**	Set of functions that will allow us to grow an existing malloc'd char array
**	Given an already existing dest pointer and a src we would like to add:
**	1) produce a new dest such that: (dest = dest + src)
*/

char	*ft_strcpy(char *dest, char src[])
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, unsigned int dest_len, char src[])
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*str_realloc(char *dest, char src[], t_strlen strl)
{
	char	*new_dest;

	if (dest)
	{
		new_dest = (char *)malloc(sizeof(*dest) * (strl.res + strl.ret + 1));
		new_dest = ft_strcpy(new_dest, dest);
		new_dest = ft_strcat(new_dest, strl.res, src);
		free(dest);
		return (new_dest);
	}
	return (NULL);
}
