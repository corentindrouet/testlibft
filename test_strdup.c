/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 09:01:05 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/01 09:11:59 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strdup_1()
{
	char	*result1;
	char	*result2;
	int		ret;

	result1 = strdup("bonjour");
	result2 = ft_strdup("bonjour");
	ft_putstr("strdup return : ");
	ft_putstr(result1);
	ft_putstr(" |-|||-| ");
	ft_putstr("ft_strdup return : ");
	ft_putendl(result2);
	ret = memcmp(result1, result2, 8);
	free(result1);
	free(result2);
	return (ret);
}

void		test_strdup()
{
	ft_putendl("TEST STRDUP :");
	if (!test_strdup_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
