/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 15:34:11 by nmei              #+#    #+#             */
/*   Updated: 2017/08/30 20:27:32 by nmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "bsq.h"

#include <stdio.h>

void	handle_mult_args(int argc, char const *argv[])
{
	t_bsq_val	bsq;
	int			bsq_num;

	bsq_num = 0;
	while (bsq_num < (argc - 1))
	{
		read_file(argv[bsq_num + 1], &bsq);
		if (bsq.valid)
		{
			modify_map(&bsq);
			write(1, bsq.map, bsq.map_len);
		}
		else
		{
			putstr_fd(2, "map error\n");
		}
		pre_init_bsq(&bsq);
		bsq_num++;
	}
}

void	handle_stdin(void)
{
	t_bsq_val	bsq;

	read_stdin(&bsq);
	if (bsq.valid)
	{
		modify_map(&bsq);
		write(1, bsq.map, bsq.map_len);
	}
	else
	{
		putstr_fd(2, "map error\n");
	}
	pre_init_bsq(&bsq);
}

int		main(int argc, char const *argv[])
{
	if (argc > 1)
	{
		handle_mult_args(argc, argv);
	}
	if (argc == 1)
	{
		handle_stdin();
	}
	return (0);
}
