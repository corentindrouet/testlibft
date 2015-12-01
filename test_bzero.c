/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:10:08 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/01 07:49:13 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_bzero_1()
{
	char	norm[20] = "bonjour";
	char	re[20] = "bonjour";
	int		i;

	bzero(norm, 4);
	i = -1;
	while (++i < 7)
		ft_putchar(norm[i]);
	ft_putstr(" |-|||-| ");
	ft_bzero(re, 4);
	i = -1;
	while (++i < 7)
		ft_putchar(norm[i]);
	ft_putchar('\n');
	return (memcmp(norm, re, 8));
}

static int	test_bzero_2()
{
	char	norm[20] = "bonjour";
	char	re[20] = "bonjour";
	int		i;

	bzero(norm, 10);
	i = -1;
	while (++i < 7)
		ft_putchar(norm[i]);
	ft_putstr(" |-|||-| ");
	ft_bzero(re, 10);
	i = -1;
	while (++i < 7)
		ft_putchar(norm[i]);
	ft_putchar('\n');
	return (memcmp(norm, re, 8));
}

static int	test_bzero_3()
{
	char	norm[20] = "bonjour";
	char	re[20] = "bonjour";
	int		i;

	bzero(norm, 0);
	i = -1;
	while (++i < 7)
		ft_putchar(norm[i]);
	ft_putstr(" |-|||-| ");
	ft_bzero(re, 0);
	i = -1;
	while (++i < 7)
		ft_putchar(norm[i]);
	ft_putchar('\n');
	return (memcmp(norm, re, 8));
}

void		test_bzero()
{
	ft_putendl("TEST BZERO :");
	if (!test_bzero_1() && !test_bzero_2() && !test_bzero_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
