/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyze_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 13:12:56 by nmei              #+#    #+#             */
/*   Updated: 2017/08/27 22:13:38 by nmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#define VAL(x) (x == 'o', x == '|', x == '/', x == '\\', x == '-', x == '*')
#define ALPH(y) (y >= 'A' && y<= 'Z')

#include <stdio.h>

/*
**	get_dims(char **input_shape, t_rushpars *rparams);
**	Given a 2D character array and a t_rushpars struct
**	1) Find the width (x) and height (y) of the given character array
**	2) update t_rushpars->x and t_rushpars->y
*/

void		get_dims(char **input_shape, t_rushpars *rparams)
{
	int row;
	int col;
	int c_count;

	row = 0;
	col = 0;
	c_count = 0;
	while (input_shape[row])
	{
		while (input_shape[row][col])
		{
			if (input_shape[row][col] != '\n')
				c_count++;
			col++;
		}
		row++;
	}
	rparams->x = c_count;
	rparams->y = row;
}

/*
**	get_features(char **input_shape, t_rushpars *rparams);
**	Given a 2D character array and a t_rushpars struct
**	1) Use the x and y data we extracted with get_dims and
**	2) Determine the features of the corners and walls of the input shape
**	2a) Get corners as long as the shape has a (> 0) x and y
**	2b) In the case where one of the dims is 1 then we need to
**	collect a wall sample from the non-1 dimension.
**	2c) If we have multiple x and y dims then let's just sample the col
*/

void		get_features(char **input_shape, t_rushpars *rparams)
{
	if (rparams->x > 0 && rparams->y > 0)
	{
		rparams->ul = input_shape[0][0];
		rparams->ll = input_shape[(rparams->y) - 1][0];
		rparams->ur = input_shape[0][(rparams->x) - 1];
		rparams->lr = input_shape[(rparams->y) - 1][(rparams->x) - 1];
		if (rparams->x == 1)
		{
			rparams->wall = input_shape[(rparams->y) / 2][0];
		}
		else if (rparams->y == 1)
		{
			rparams->wall = input_shape[0][(rparams->x) / 2];
		}
		else
			rparams->wall = input_shape[0][(rparams->x) / 2];
	}
}

t_rushpars	analyze_input(char **input_shape)
{
	t_rushpars	rparams;

	get_dims(input_shape, &rparams);
	get_features(input_shape, &rparams);
	return (rparams);
}
