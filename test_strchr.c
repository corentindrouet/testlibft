/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:17:26 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 10:31:40 by cdrouet          ###   ########.fr       */
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
	ft_putstr("strchr : ");
	ft_putstr(result1);
	ft_putstr(" |-|||-| ");
	ft_putstr("ft_strchr : ");
	ft_putendl(result2);
	return (strcmp(result1, result2));
}

static int	test_strchr_2()
{
	char	*result1;
	char	*result2;
	char	chr[20] = "bonjour";

	result1 = strchr(chr, 'q');
	result2 = ft_strchr(chr, 'q');
	ft_putstr("strchr : ");
	ft_putstr("NULL");
	ft_putstr(" |-|||-| ");
	ft_putstr("ft_strchr : ");
	if (result2)
	{
		ft_putendl(result2);
		return (1);
	}
	ft_putendl("NULL");
	return (0);
}

void		test_strchr()
{
	ft_putendl("TEST STRCHR :");
	if (!test_strchr_1() && !test_strchr_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
