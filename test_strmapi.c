/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 08:14:46 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 09:43:12 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static char	test_strmapi_1(unsigned int i, char c)
{
	c -= i;
	return (c);
}

void		test_strmapi()
{
	char	(*f)(unsigned int, char);
	char	ptr[20] = "bonjour";
	char	*result;

	f = &test_strmapi_1;
	result = ft_strmapi(ptr, f);
	ft_putstr("TEST STRMAPI : ");
	if (!strcmp(result, "bnlgkpl"))
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
