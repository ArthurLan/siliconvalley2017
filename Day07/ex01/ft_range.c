/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:52:14 by alanter           #+#    #+#             */
/*   Updated: 2017/08/17 23:14:03 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
