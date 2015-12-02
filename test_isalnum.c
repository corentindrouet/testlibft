/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:49:33 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:00:02 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <ctype.h>

static int	test_isalnum_1()
{
	return (isalnum('T') - ft_isalnum('T'));
}

static int	test_isalnum_2()
{
	return (isalnum('{') - ft_isalnum('{'));
}

void		test_isalnum()
{
	ft_putstr("TEST ISALNUM : ");
	if (!test_isalnum_1() && !test_isalnum_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
