/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:34:48 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 16:40:44 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strjoin_1()
{
	return (strcmp(ft_strjoin("bonjour", "BONJOUR"), "bonjourBONJOUR"));
}

static int	test_strjoin_2()
{
	return (strcmp(ft_strjoin("", "BONJOUR"), "BONJOUR"));
}

static int	test_strjoin_3()
{
	return (strcmp(ft_strjoin("bonjour", ""), "bonjour"));
}

void		test_strjoin()
{
	ft_putstr("TEST STRJOIN : ");
	if (!test_strjoin_1() && !test_strjoin_2() && !test_strjoin_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
