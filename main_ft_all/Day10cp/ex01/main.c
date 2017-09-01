/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 15:42:22 by alanter           #+#    #+#             */
/*   Updated: 2017/08/22 16:24:10 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

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

int		main(void)
{
	int		tab[5];
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}
