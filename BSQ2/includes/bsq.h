/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 15:26:13 by nmei              #+#    #+#             */
/*   Updated: 2017/08/30 20:21:42 by nmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct	s_bsq_val
{
	unsigned	lines;
	unsigned	fline_len;

	unsigned	r;
	unsigned	c;
	unsigned	best_r;
	unsigned	best_c;

	unsigned	big_s;
	unsigned	valid;

	char		*first_l;
	char		*map;

	unsigned	*p_l;
	unsigned	*c_l;

	unsigned	map_len;

	char		obst;
	char		empt;
	char		fill;

	char		first_line_set;
	char		map_set;
	char		prev_l_set;
	char		curr_l_set;
}				t_bsq_val;
/*
** bsq_write_utils.c
*/
void			putstr_fd(int fd, char *str);
/*
**	bsq_struct_utils.c
*/
void			pre_init_bsq(t_bsq_val *bsq);
void			init_bsq(t_bsq_val *bsq, char *first_line);
/*
**	bsq_general_utils.c
*/
void			bsq_supercat(t_bsq_val *bsq, char *src);
int				ft_atoi(char *str, int numchars);

/*
**	bsq_read_utils.c
*/
char			*read_file(const char *fpath, t_bsq_val *bsq);
char			*read_stdin(t_bsq_val *bsq);
/*
**	bsq_write_utils.c
*/
void			modify_map(t_bsq_val *bsq);
#endif
