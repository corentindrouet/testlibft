/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:17:26 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:03:10 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test_strchr_1()
{
	char	*result1;
	char	*result2;
	char	chr[20] = "bonjour";

	result1 = strchr(chr, 'j');
	result2 = ft_strchr(chr, 'j');
	return (strcmp(result1, result2));
}

static int	test_strchr_2()
{
	char	*result1;
	char	*result2;
	char	chr[20] = "bonjour";

	result1 = strchr(chr, 'q');
	result2 = ft_strchr(chr, 'q');
	if (result2)
		return (1);
	return (0);
}

void		test_strchr()
{
	ft_putstr("TEST STRCHR : ");
	if (!test_strchr_1() && !test_strchr_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
