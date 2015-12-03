/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 09:44:33 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 09:54:02 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strnequ_1()
{
	return (ft_strnequ("bonjour", "bonjour", 7));
}

static int	test_strnequ_2()
{
	return (ft_strnequ("bonsoir", "bonjour", 3));
}

void		test_strnequ()
{
	ft_putstr("TEST STRNEQU : ");
	if (test_strnequ_1() && test_strnequ_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
