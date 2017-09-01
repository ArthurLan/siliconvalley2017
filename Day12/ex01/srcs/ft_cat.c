/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 23:26:02 by alanter           #+#    #+#             */
/*   Updated: 2017/08/24 23:27:30 by alanter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	errno(char *name)
{
	ft_putstr("cat: ");
	ft_putstr(name);
	if (errno == ENOENT)
		ft_putstr(": No such file or directory\n");
	else if (errno == EACCES)
		ft_putstr(": Permission denied\n");
	else if (errno == EISDIR)
		ft_putstr(": Is a directory\n";
}

void	ft_display_file(char *file_name)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (errno == 0)
	{
		ret = read(fd, buf, BUF_SIZE);
		i = 0;
		while (i < ret)
		{
			write(1, &buf[i], 1);
			++i;
		}
	}
	else
		errno(file_name);
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
