/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_general_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/28 21:45:14 by nmei              #+#    #+#             */
/*   Updated: 2017/08/30 20:43:28 by nmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#define IS_DIGIT(y) ((y) >= '0' && (y) <= '9')
#define SEP(w) ((w) == ' ' || (w) == '\n' || (w) == '\t')
#define SPACE(x) ((x) == '\v' || (x) == '\f' || (x) == '\r')
#define M(x, y) (((x) < (y)) ? (x) : (y))
#define MAX(x, y) (((x) > (y)) ? (x) : (y))

/*
**	bsq struct type = b
**	top = b->p_l[*j];
**	u_left = b->p_l[*j - 1];
**	left = b->c_l[*j - 1];
**	p_l = previous_line
**	c_l = current_line
**	M is our MIN macro
*/

void	chk_sq(t_bsq_val *b, char *src)
{
	unsigned	*temp;
	unsigned	*j;

	j = &(b->c);
	if (src[*j] != '\n')
	{
		b->c_l[*j] = (src[*j] == b->empt) ? 1 : 0;
		if (b->c_l[*j] == 1 && *j > 0 && b->r > 0)
			b->c_l[*j] = M(M(b->p_l[*j - 1], b->c_l[*j - 1]), b->p_l[*j]) + 1;
		if (b->c_l[*j] > b->big_s)
		{
			b->big_s = b->c_l[*j];
			b->best_r = b->r;
			b->best_c = b->c;
		}
	}
	else
	{
		temp = b->p_l;
		b->p_l = b->c_l;
		b->c_l = temp;
	}
}

/*
**	bsq_supercat(t_bsq_val *bsq)
**	yeah... it basically does everything...
**	bsq->c (column) = *j and is our column iterator
**	bsq->r (row)
*/

void	bsq_supercat(t_bsq_val *bsq, char *src)
{
	unsigned	*j;

	j = &(bsq->c);
	*j = 0;
	if (src[bsq->fline_len - 1] != '\n' || bsq->r > bsq->lines - 1)
		bsq->valid = 0;
	while (*j < bsq->fline_len && bsq->valid)
	{
		if (src[*j] != bsq->obst && src[*j] != bsq->empt && src[*j] != '\n')
		{
			bsq->valid = 0;
			break ;
		}
		chk_sq(bsq, src);
		bsq->map[bsq->map_len] = src[*j];
		bsq->map_len += 1;
		(*j)++;
	}
	bsq->map[bsq->map_len] = '\0';
	(bsq->r)++;
}

int		ft_atoi(char *str, int numchars)
{
	int result;
	int sign;
	int ind;

	ind = 0;
	result = 0;
	sign = -1;
	while (SPACE(str[ind]) || SEP(str[ind]))
		ind++;
	if (str[ind] == '+' || str[ind] == '-')
	{
		if (str[ind] == '-')
			sign = 1;
		ind++;
	}
	while (IS_DIGIT(str[ind]) && ind < numchars)
	{
		result *= 10;
		result -= str[ind] - '0';
		ind++;
	}
	if (sign == 1)
		result = 0;
	return (result * sign);
}
