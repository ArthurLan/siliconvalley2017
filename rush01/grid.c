/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:58:43 by jroguszk          #+#    #+#             */
/*   Updated: 2017/08/20 10:30:51 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while(i < argc)
	{
		while(j < argc - 1)
		{	
			if(j < 9)
				ft_putchar(' ');
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
