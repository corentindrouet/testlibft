/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:39:11 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 11:44:01 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
#include <ctype.h>

static int	test_isalpha_1()
{
	return (isalpha('T') - ft_isalpha('T'));
}

static int	test_isalpha_2()
{
	return (isalpha('3') - ft_isalpha('3'));
}

void		test_isalpha()
{
	ft_putendl("TEST ISALPHA :");
	if (!test_isalpha_1() && !test_isalpha_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
