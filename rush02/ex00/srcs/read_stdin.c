/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmei <nmei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 21:51:50 by jthompki          #+#    #+#             */
/*   Updated: 2017/08/27 22:50:26 by nmei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <rush_02.h>

#define SEP(x) (x=='\n')

char	**allocate_table(char **table, char *c)
{
	int		i;
	int		num_words;

	i = 0;
	num_words = 0;
	while (SEP(c[i]))
		i++;
	while (c[i])
	{
		i++;
		if (SEP(c[i]))
		{
			num_words++;
			while (SEP(c[i]))
				i++;
		}
	}
	if (!SEP(c[i - 1]))
		num_words++;
	table = (char**)malloc(sizeof(*table) * (num_words + 10));
	table[num_words] = 0;
	return (table);
}

char	**allocate_words(char **table, char *c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (SEP(c[i]))
		i++;
	while (c[i])
	{
		i++;
		if (SEP(c[i]) || !c[i])
		{
			table[j] = (char*)malloc(sizeof(**table) * (k + 10));
			j++;
			k = 0;
			while (SEP(c[i]))
				i++;
		}
		k++;
	}
	return (table);
}

char	**split_newlines(char *c)
{
	char	**table;

	table = NULL;
	table = allocate_table(table, c);
	table = allocate_words(table, c);
	table = fill_table(table, c);
	return (table);
}

char	*get_stdin(void)
{
	char	buf;
	char	*str;
	int		i;
	int		c;

	c = 0;
	i = 0;
	str = (char*)malloc(sizeof(char) * 10000000000);
	while ((read(0, &buf, 1)))
	{
		if (buf == '\n')
		{
			c = 0;
		}
		else
			c++;
		str[i] = buf;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**read_stdin(void)
{
	char	*input;
	char	**table;

	input = get_stdin();
	table = split_newlines(input);
	return (table);
}
