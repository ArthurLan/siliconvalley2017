/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reprod_rush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 04:32:55 by alanter           #+#    #+#             */
/*   Updated: 2017/08/27 14:19:37 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*assign_type(char l, char c, char r, int x)
{
	char	*line;
	int		width;

	width = 2;
	line = malloc(sizeof(char) * x);
	line[0] = l;
	while (width < x)
	{
		line[width - 1] = c;
		++width;
	}
	if (x > 1)
	{
		line[width - 1] = r;
		line[width] = '\n';
	}
	else
		line[width] = '\n';
	return (line);
}

char	*up(t_rushpars rparams)
{
	char *upline;

	upline = malloc(sizeof(char) * rparams.x);
	if (rparams.rush_type[8] == '0')
		upline = assign_type('o', '-', 'o', rparams.x);
	else if (rparams.rush_type[8] == '1')
		upline = assign_type('/', '*', '\\', rparams.x);
	else if (rparams.rush_type[8] == '2')
		upline = assign_type('A', 'B', 'A', rparams.x);
	else if (rparams.rush_type[8] == '3')
		upline = assign_type('A', 'B', 'C', rparams.x);
	else if (rparams.rush_type[8] == '4')
		upline = assign_type('A', 'B', 'C', rparams.x);
	return (upline);
}

char	*body(t_rushpars rparams)
{
	char *body;

	body = malloc(sizeof(char) * rparams.x);
	if (rparams.rush_type[8] == '0')
		body = assign_type('|', ' ', '|', rparams.x);
	else if (rparams.rush_type[8] == '1')
		body = assign_type('*', ' ', '*', rparams.x);
	else if (rparams.rush_type[8] == '2')
		body = assign_type('B', ' ', 'B', rparams.x);
	else if (rparams.rush_type[8] == '3')
		body = assign_type('B', ' ', 'B', rparams.x);
	else if (rparams.rush_type[8] == '4')
		body = assign_type('B', ' ', 'B', rparams.x);
	return (body);
}

char	*down(t_rushpars rparams)
{
	char *down;

	down = malloc(sizeof(char) * rparams.x);
	if (rparams.rush_type[8] == '0')
		down = assign_type('o', '-', 'o', rparams.x);
	else if (rparams.rush_type[8] == '1')
		down = assign_type('\\', '*', '/', rparams.x);
	else if (rparams.rush_type[8] == '2')
		down = assign_type('C', 'B', 'C', rparams.x);
	else if (rparams.rush_type[8] == '3')
		down = assign_type('A', 'B', 'C', rparams.x);
	else if (rparams.rush_type[8] == '4')
		down = assign_type('C', 'B', 'A', rparams.x);
	return (down);
}

char	**reprod_rush(t_rushpars rparams)
{
	int		body_counter;
	char	**valid_rush;

	valid_rush = NULL;
	body_counter = 2;
	valid_rush = (char **)malloc(sizeof(*valid_rush) * (rparams.y + 1));
	if (rparams.x > 0 && rparams.y > 0)
	{
		valid_rush[0] = up(rparams);
		while (body_counter < rparams.y)
		{
			valid_rush[body_counter - 1] = body(rparams);
			++body_counter;
		}
		if (rparams.y > 1)
			valid_rush[body_counter - 1] = down(rparams);
	}
	return (valid_rush);
}
