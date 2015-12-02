/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:39:11 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 11:47:29 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <ctype.h>

static int	test_isdigit_1()
{
	return (isdigit('T') - ft_isdigit('T'));
}

static int	test_isdigit_2()
{
	return (isdigit('3') - ft_isdigit('3'));
}

void		test_isdigit()
{
	ft_putendl("TEST ISDIGIT :");
	if (!test_isdigit_1() && !test_isdigit_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
