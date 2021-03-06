/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteratice_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 21:26:35 by alanter           #+#    #+#             */
/*   Updated: 2017/08/13 12:51:51 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (nb > 0 && nb < 13)
	{
		while (nb > 1)
		{
			i = i * (nb - 1);
			nb--;
		}
		return (i);
	}
	else
		return (0);
}
