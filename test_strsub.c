/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 09:55:48 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 10:28:25 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strsub_1()
{
	char	ptr[20] = "bonjour";
	char	*result;

	result = ft_strsub(ptr, 2, 3);
	return (strcmp(result, "njo"));
}

void		test_strsub()
{
	ft_putstr("TEST STRSUB : ");
	if (!test_strsub_1())
		ft_putstr("ok :)");
	else
		ft_putstr("not ok :(");
}
