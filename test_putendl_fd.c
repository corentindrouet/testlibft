/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:22:16 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 14:40:33 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <fcntl.h>

static int	test_putendl_fd_1()
{
	int		fd;
	char	c[10];

	fd = 0;
	fd = open("tempo.txt", O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR | S_IXUSR);
	ft_putendl_fd("bonjour", fd);
	close(fd);
	fd = open("tempo.txt", O_RDWR);
	read(fd, c, 10);
	close(fd);
	return (strcmp(c, "bonjour\n"));
}

void		test_putendl_fd()
{
	ft_putstr("TEST PUTENDL_FD : ");
	if (!test_putendl_fd_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
