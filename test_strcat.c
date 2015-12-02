/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:21:57 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:08:08 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strcat_1()
{
	char	result1[30] = "bonjour";
	char	result2[30] = "bonjour";
	char	cat[10] = "essai";

	strcat(result1, cat);
	strcat(result2, cat);
	return (strcmp(result1, result2));
}

void		test_strcat()
{
	ft_putstr("TEST STRCAT : ");
	if (!test_strcat_1())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
