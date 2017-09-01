/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 15:53:31 by alanter           #+#    #+#             */
/*   Updated: 2017/08/24 23:05:34 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(char *file_name)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		write(2, "open() failed", 13);
	else
	{
		ret = read(fd, buf, BUF_SIZE);
		i = 0;
		while (i < ret)
		{
			write(1, &buf[i], 1);
			++i;
		}
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_display_file(argv[1]);
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else
		write(2, "Too many arguments.\n", 20);
}
