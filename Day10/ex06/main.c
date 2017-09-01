/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:45:02 by alanter           #+#    #+#             */
/*   Updated: 2017/08/22 23:35:58 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	operation(a, b)
{
	int b;
	int a;
}

int		main(int argc, char *argv)
{
	int nb;
	int a;
	int b;

	if (argc == 3)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3])
		if (argv[2] == '+')
			nb = add(a, b)
		else if (argv[2] == '-')
		else if (argv[2] == '%')
				nb = mod(a, b)
		else if (argv[2] == '/')
				nb = div(a, b)
		else
			ft_putchar('0')
		ft_putnbr(nb)
	}
	else
		return (0);
}
