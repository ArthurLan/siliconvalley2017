/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 17:32:42 by alanter           #+#    #+#             */
/*   Updated: 2017/08/13 17:49:44 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	up_down(int x)
{
	int width;

	width = 2;
	ft_putchar('o');
	while (width < x)
	{
		ft_putchar('-');
		width++;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	body(int x)
{
	int width;

	width = 2;
	ft_putchar('|');
	while (width < x)
	{
		ft_putchar(' ');
		width++;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int body_counter;

	if (x > 1 && y > 1)
	{
		body_counter = 2;
		up_down(x);
		while (body_counter < y)
		{
			body(x);
			body_counter++;
		}
		if (y > 1)
			up_down(x);
	}
}
