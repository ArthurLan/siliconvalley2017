/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 22:11:11 by nmei              #+#    #+#             */
/*   Updated: 2017/08/27 22:34:28 by nmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"
#include <stdio.h> 

int	main(void)
{
	char	**std_input;

	std_input = read_stdin();

	int i = 0;
	while(std_input[i])
	{
		printf("line: %s\n", std_input[i]);
		i++;
	}
	/* code */
	return (0);
}