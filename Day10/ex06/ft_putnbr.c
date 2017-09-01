/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:47:29 by alanter           #+#    #+#             */
/*   Updated: 2017/08/22 22:56:46 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int specialint;

	if (nb > 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else if (nb == -2147483648)
	{
		specialint = nb / 10;
		ft_putnbr(specialint);
		ft_putnbr(8);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
