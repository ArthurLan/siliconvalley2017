/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:52:14 by alanter           #+#    #+#             */
/*   Updated: 2017/08/17 23:11:28 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *range;
	int *ptr;
	
	range = (int*)malloc(sizeof(*range) * (max - min));
	ptr = range;
	if (min >= max)
		return (NULL);
	else
		while(min < max)
			*range++ = min++;
	return (ptr);
}

int main(void)
{
	int i;
	int *array;

	i = 0;
	array = ft_range(7, 12);
	while (i < 12 - 7)
	{
		printf("%d\n", array[i++]);
	}
}
