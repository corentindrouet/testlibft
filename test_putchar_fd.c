/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:42:32 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 14:48:33 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <fcntl.h>

static int	test_putchar_fd_1()
{
	int		fd;
	int		res;
	char	c;

	fd = 0;
	res = 0;
	fd = open("tempo.txt", O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR | S_IXUSR);
	ft_putchar_fd('c', fd);
	close(fd);
	fd = open("tempo.txt", O_RDWR);
	read(fd, &c, 1);
	close(fd);
	return (c - 'c');
}

void		test_putchar_fd()
{
	ft_putstr("TEST PUTCHAR FD : ");
	if (!test_putchar_fd_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
