/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:17:41 by alanter           #+#    #+#             */
/*   Updated: 2017/08/15 12:43:44 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	char test[] = "5";

	printf("test 			returns : %d", ft_atoi(test));
	printf("\n");
	printf("4 			returns : %d", ft_atoi("4"));
	printf("\n");
	printf("-  89 			returns : %d", ft_atoi("- 89"));
	printf("\n");
	printf("2.147			returns : %d", ft_atoi("2.147"));
	printf("\n");
	printf("- e 55 			returns : %d", ft_atoi("- e 55"));
	printf("\n");
	printf("ia55 			returns : %d", ft_atoi("iq55"));
	printf("\n");
	printf("+ 42 			returns : %d", ft_atoi("+ 42"));
	printf("\n");
	printf("+42 			returns : %d", ft_atoi("+42"));
	printf("\n");
	printf("-42 			returns : %d", ft_atoi("-42"));
	printf("\n");
	printf("- 42 			returns : %d", ft_atoi("- 42"));
	printf("\n");
	printf("  		55 	returns : %d", ft_atoi("  		55"));
	printf("\n");
	printf("  		 	returns : %d", ft_atoi("  		"));
	printf("\n");
	printf("2000000 		returns : %d", ft_atoi("2000000"));
	printf("\n");
	printf("-2000000 		returns : %d", ft_atoi("-2000000"));
	printf("\n");
	printf("2147483647 		returns : %d", ft_atoi("-2147483647"));
	printf("\n");
	printf("-2147483648		returns : %d", ft_atoi("-2147483648"));
	return (0);
}
