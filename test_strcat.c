/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:21:57 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 09:28:24 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strcat_1()
{
	char	result1[30] = "bonjour";
	char	result2[30] = "bonjour";
	char	cat[10] = "essai";

	strcat(result1, cat);
	ft_putstr("strcat : ");
	ft_putstr(result1);
	ft_putstr(" |-|||-| ");
	ft_strcat(result2, cat);
	ft_putstr("ft_strcat : ");
	ft_putendl(result2);
	return (strcmp(result1, result2));
}

void		test_strcat()
{
	ft_putendl("TEST STRCAT");
	if (!test_strcat_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
