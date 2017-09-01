/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:19:58 by alanter           #+#    #+#             */
/*   Updated: 2017/08/15 19:06:48 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
    char *rtn;

	rtn = dest;
    while ((*rtn++ = *src++) != 0)
	;
    return (rtn);
}