/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 08:14:46 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 08:25:46 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static void	test_striter_1(char *c)
{
	*c -= 1;
}

void		test_striter()
{
	void	(*f)(char*);
	char	ptr[20] = "bonjour";

	f = &test_striter_1;
	ft_striter(ptr, f);
	ft_putstr("TEST STRITER : ");
	if (!strcmp(ptr, "anmintq"))
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
