/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:57:01 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 11:04:57 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strcmp_1()
{
	return (strcmp("abcd", "abcd") - ft_strcmp("abcd", "abcd"));
}

static int	test_strcmp_2()
{
	return (strcmp("abcd", "abcde") - ft_strcmp("abcd", "abcde"));
}

void		test_strcmp()
{
	ft_putendl("TEST STRCMP");
	if (!test_strcmp_1() && !test_strcmp_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
