/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssgibnev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 12:50:34 by ssgibnev          #+#    #+#             */
/*   Updated: 2017/08/13 13:02:52 by ssgibnev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	up(int x)
{
	int width;

	width = 2;
	ft_putchar('A');
	while (width < x)
	{
		ft_putchar('B');
		width++;
	}
	if (x > 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	down(int x)
{
	int width;

	width = 2;
	ft_putchar('C');
	while (width < x)
	{
		width++;
		ft_putchar('B');
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	body(int x)
{
	int width;

	width = 2;
	ft_putchar('B');
	while (width < x)
	{
		ft_putchar(' ');
		width++;
	}
	if (x > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int body_counter;

	if (x > 0 && y > 0)
	{
		body_counter = 2;
		up(x);
		while (body_counter < y)
		{
			body(x);
			body_counter++;
		}
		if (y > 1)
			down(x);
	}
}
