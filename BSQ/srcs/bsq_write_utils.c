/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_write_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 16:08:15 by nmei              #+#    #+#             */
/*   Updated: 2017/08/30 20:25:01 by nmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "bsq.h"

#include <stdio.h>

void	putstr_fd(int fd, char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	write(fd, str, count);
}

void	modify_map(t_bsq_val *bsq)
{
	unsigned i;
	unsigned j;
	unsigned map_ind;

	i = 1;
	map_ind = 0;
	while (i <= bsq->big_s)
	{
		j = 1;
		while (j <= bsq->big_s)
		{
			map_ind = bsq->fline_len * (bsq->best_r - bsq->big_s + i);
			map_ind += bsq->best_c - bsq->big_s + j;
			bsq->map[map_ind] = bsq->fill;
			j++;
		}
		i++;
	}
}
