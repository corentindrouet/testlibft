/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:55:20 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 12:59:41 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <ctype.h>

static int	test_isascii_1()
{
	return (isascii('T') - isascii('*'));
}

static int	test_isascii_2()
{
	return (isascii('\200') - isascii('\200'));
}

void		test_isascii()
{
	ft_putstr("TEST ISASCII : ");
	if (!test_isascii_1() && !test_isascii_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
