/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 17:43:00 by alanter           #+#    #+#             */
/*   Updated: 2017/08/13 17:43:38 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	up(int x)
{
	int width;

	width = 2;
	ft_putchar('/');
	while (width < x)
	{
		ft_putchar('*');
		width++;
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	down(int x)
{
	int width;

	width = 2;
	ft_putchar('\\');
	while (width < x)
	{
		ft_putchar('*');
		width++;
	}
	if (x > 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	body(int x)
{
	int width;

	width = 2;
	ft_putchar('*');
	while (width < x)
	{
		ft_putchar(' ');
		width++;
	}
	if (x > 1)
		ft_putchar('*');
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
