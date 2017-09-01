/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 16:38:35 by alanter           #+#    #+#             */
/*   Updated: 2017/08/22 17:04:29 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, void (*f)(int))
{
	int i;
	int *dest;

	i = 0;
	dest = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		*dest[i] = f(tab[i]);
		++i;
	}
	return (dest);
}
