/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 23:33:06 by alanter           #+#    #+#             */
/*   Updated: 2017/08/17 23:33:09 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	return (sizeof(range) / sizeof(*range));
}

int	*ft_range(int min, int max)
{
	int *range;
	int *ptr;

	range = (int*)malloc(sizeof(*range) * (max - min));
	ptr = range;
	if (min >= max)
		return (NULL);
	else
		while (min < max)
			*range++ = min++;
	return (ptr);
}
