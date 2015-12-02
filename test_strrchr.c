/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:17:26 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:02:00 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test_strrchr_1()
{
	char	*result1;
	char	*result2;
	char	chr[20] = "bonjour";

	result1 = strrchr(chr, 'j');
	result2 = ft_strrchr(chr, 'j');
	return (strcmp(result1, result2));
}

static int	test_strrchr_2()
{
	char	*result1;
	char	*result2;
	char	chr[20] = "bonjour";

	result1 = strrchr(chr, 'q');
	result2 = ft_strrchr(chr, 'q');
	if (result2)
		return (1);
	return (0);
}

void		test_strrchr()
{
	ft_putstr("TEST STRRCHR : ");
	if (!test_strrchr_1() && !test_strrchr_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
