/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 22:14:35 by alanter           #+#    #+#             */
/*   Updated: 2017/08/20 22:16:53 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	int count_n;

	count_n = 0;
	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 != 0 && *s2 == '*')
		return (match(s1 + 1, s2) + match(s1, s2 + 1));
	else if (*s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1++ == *s2++)
		return (match(s1, s2));
	else
		return (0);
}
