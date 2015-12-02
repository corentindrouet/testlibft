/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:27:25 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 15:39:54 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <fcntl.h>

static int	test_putstr_fd_1()
{
	int		fd;
	int		res;
	char	c[10];

	fd = 0;
	res = 0;
	fd = open("tempo.txt", O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR | S_IXUSR);
	ft_putstr_fd("bonjour", fd);
	close(fd);
	fd = open("tempo.txt", O_RDWR);
	read(fd, c, 10);
	close(fd);
	return (strcmp(c, "bonjour"));
}

void		test_putstr_fd()
{
	ft_putstr("TEST PUTSTR FD : ");
	if (!test_putstr_fd_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
