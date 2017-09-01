/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:17:41 by alanter           #+#    #+#             */
/*   Updated: 2017/08/15 19:23:14 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nbatoi(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr);
}

int	ft_atoi(char *str)
{
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
	{
		str++;
	}
	if (str[0] == '-')
		return (ft_nbatoi(&str[1]) * -1);
	else if (str[0] == '+')
		if (str[1] >= '0' && str[1] <= '9')
			return (ft_nbatoi(&str[1]));
		else
			return (0);
	else if (str[0] >= '0' && str[0] <= '9')
		return (ft_nbatoi(str));
	else
		return (0);
}
