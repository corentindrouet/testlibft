/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:29:13 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 16:34:19 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strtrim_1()
{
	return (strcmp(ft_strtrim("  \nbonjour\t  \n"), "bonjour"));
}

static int	test_strtrim_2()
{
	return (strcmp(ft_strtrim("bonjour"), "bonjour"));
}

void		test_strtrim()
{
	ft_putstr("TEST STRTRIM : ");
	if (!test_strtrim_1() && !test_strtrim_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
