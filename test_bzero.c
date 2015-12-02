/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:10:08 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:16:35 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_bzero_1()
{
	char	norm[20] = "bonjour";
	char	re[20] = "bonjour";

	bzero(norm, 4);
	ft_bzero(re, 4);
	return (memcmp(norm, re, 8));
}

static int	test_bzero_2()
{
	char	norm[20] = "bonjour";
	char	re[20] = "bonjour";

	bzero(norm, 10);
	ft_bzero(re, 10);
	return (memcmp(norm, re, 8));
}

static int	test_bzero_3()
{
	char	norm[20] = "bonjour";
	char	re[20] = "bonjour";

	bzero(norm, 0);
	ft_bzero(re, 0);
	return (memcmp(norm, re, 8));
}

void		test_bzero()
{
	ft_putstr("TEST BZERO : ");
	if (!test_bzero_1() && !test_bzero_2() && !test_bzero_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
