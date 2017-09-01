/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/26 15:26:04 by nmei              #+#    #+#             */
/*   Updated: 2017/08/27 23:08:28 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 32

typedef	struct	s_rushpars
{
	int		x;
	int		y;
}				t_rushpars;

/*
**	fill_table.c
*/
char			**fill_table(char **table, char *c);

/*
**	read_stdin.c
*/
char			**allocate_table(char **table, char *c);
char			**allocate_words(char **table, char *c);
char			**split_newlines(char *c);
char			*get_stdin(void);
char			**read_stdin(void);

/*
**	utilities.c
*/
void			ft_putchar(char c);
void			ft_putstr(char *c);
char			*ft_strcat(char *dest, char *src);
char			*ft_strcpy(char *dest, char *src);
int				ft_strcmp(char *s1, char *s2);

/*
**	rush_utility.c
**	Functions that will read in an unknown shape from std input
*/
char			**read_stdin(void);

/*
**	analyze_input.c
**	Functions that will analyze a shape and attempt to classify the
**	rush type.
*/
t_rushpars		analyze_input(char **input_shape);

/*
**	reprod_rush.c
**	Functions that take in parameters needed to print and reproduce
**	a rush shape so that we can check it against our unknown input.
*/
char			**reprod_rush(t_rushpars rparams);

/*
**	check_rush.c (or maybe main)
**	String comparison functions that will compare input from read_stdin()
**	to generated templates produced by reprod_rush()
*/
int				compare(char **input_shape, char **reproduced_shape);

#endif
