/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 08:14:46 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 08:34:46 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static char	test_strmap_1(char c)
{
	c -= 1;
	return (c);
}

void		test_strmap()
{
	char	(*f)(char);
	char	ptr[20] = "bonjour";
	char	*result;

	f = &test_strmap_1;
	result = ft_strmap(ptr, f);
	ft_putstr("TEST STRMAP : ");
	if (!strcmp(result, "anmintq"))
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
