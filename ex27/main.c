/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:31:35 by erli              #+#    #+#             */
/*   Updated: 2018/11/06 14:43:46 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void	ft_display_file(int fd)
{
	int		ret;
	char	buff[4097];

	while ((ret = read(fd, buff, 4096)))
	{
		buff[ret] = '\0';
		write(1, buff, ret);
	}
	close(fd);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		ft_display_file(fd);
	}
	return (0);
}
