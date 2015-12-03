/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 09:44:33 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 09:54:16 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strequ_1()
{
	return (ft_strequ("bonjour", "bonjour"));
}

static int	test_strequ_2()
{
	return (ft_strequ("bonsoir", "bonjour"));
}

void		test_strequ()
{
	ft_putstr("TEST STREQU : ");
	if (test_strequ_1() && !test_strequ_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
