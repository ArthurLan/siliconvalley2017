/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 22:33:19 by alanter           #+#    #+#             */
/*   Updated: 2017/08/22 23:32:02 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *c);

int		div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero")
		return (0);
	}
	else
	{
		a = a / b;
		return (a);
	}
}
