/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 16:38:41 by alanter           #+#    #+#             */
/*   Updated: 2017/08/17 22:02:52 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (++i && str[i] != 0)
		;
	return (i);
}

char	ft_strcpy(char *dest, char *src)
{
	char* dest2;
	int i;

	i = 0;
	dest2 = dest;
	while (src[i] != 0)
	{
		dest2[i] = src[i];
		++i;
	}
	return (*dest2);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(++i && str[i] != 0)
	ft_putchar(str[i]);
}

/*
char	*ft_strdup(char *src)
{

}
*/

int		main(void)
{
	char strthur[80];
;
	printf("%d", ft_strlen("arthur"));
	ft_strcpy(strthur, "strthur");
	printf("%s", strthur);
	return (0);
}
