/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 23:17:30 by alanter           #+#    #+#             */
/*   Updated: 2017/08/27 23:27:43 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*print(t_rushpars paramxy, int type)
{
	int x;
	int y;
	char *puttype;

	puttype = malloc(sizeof(char) * 40);
	x = paramxy.x;
	y = paramxy.y;
	if (type = 0)
		puttype = "[rush-00]"
	else if (type = 1)
		puttype = "[rush-01]"
	else if (type = 2)
		puttype = "[rush-02]"
	else if (type = 3)
		puttype = "[rush-03]"
	else if (type = 4)
		puttype = "[rush-04]"
}
