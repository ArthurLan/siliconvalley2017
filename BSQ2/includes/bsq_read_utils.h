/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_read_utils.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 15:49:31 by nmei              #+#    #+#             */
/*   Updated: 2017/08/30 20:23:19 by nmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_READ_UTILS_H
# define BSQ_READ_UTILS_H
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "bsq.h"

typedef	struct	s_strlen
{
	int			ret;
	int			res;
}				t_strlen;

/*
**	bsq_header_utils.c
*/
int				ft_read_header(int fd, t_bsq_val *bsq);

/*
**	bsq_str_realloc.c
*/
char			*str_realloc(char *dest, char src[], t_strlen strl);

#endif
