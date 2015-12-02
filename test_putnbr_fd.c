/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:22:16 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 15:40:31 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <fcntl.h>

static int	test_putnbr_fd_1()
{
	int		fd;
	int		res;
	char	c[12];

	fd = 0;
	res = 0;
	fd = open("tempo.txt", O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR | S_IXUSR);
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
	fd = open("tempo.txt", O_RDWR);
	read(fd, c, 12);
	res = atoi(c);
	close(fd);
	return ((-2147483648) - res);
}

void		test_putnbr_fd()
{
	ft_putstr("TEST PUTNBR_FD : ");
	if (!test_putnbr_fd_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
