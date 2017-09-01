/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthompki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 19:36:52 by jthompki          #+#    #+#             */
/*   Updated: 2017/08/27 19:40:00 by jthompki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#define SEP(x) (x=='\n')

char	**fill_table(char **table, char *c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (SEP(c[i]))
		i++;
	while (c[i])
	{
		table[j][k] = c[i];
		i++;
		k++;
		if (SEP(c[i]) || !c[i])
		{
			table[j][k] = '\0';
			j++;
			k = 0;
			while (SEP(c[i]))
				i++;
		}
	}
	return (table);
}
