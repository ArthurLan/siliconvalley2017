/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addition.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:28:40 by alanter           #+#    #+#             */
/*   Updated: 2017/08/20 14:28:33 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		fuckmath(int x, int y)
{
	int resultf;

	resultf = x + y;
	return (resultf);
}

int		harder(int a, int b)
{
	int resulth;

	resulth = fuckmath(a, b) + b;
	return (resulth);
}

int		main(void)
{
	printf("%d", fuckmath(fuckmath(9, 0), 2));
	printf("\nhello world!");
	printf("\nLet's print a number here : %d, and another one here, after my return to the line :\n\n%d", 42, 84);
	printf("\nHey here is the result of my function fuckmath : %d", fuckmath(4, 6));
	printf("\nAnd here is my result for the fuckmath-harder function : %d\n\n", harder(1, 2));	
	return (0);	
}
