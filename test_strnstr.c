/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:44:38 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 10:56:30 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	test_strnstr_1()
{
	char	essai[50] = "je suis etudiant a 42";
	char	*result1;
	char	*result2;

	result1 = strnstr(essai, "is et", 10);
	result2 = ft_strnstr(essai, "is et", 10);
	return (strcmp(result1, result2));
}

static int	test_strnstr_2()
{
	char	essai[50] = "je suis etudiant a 42";
	char	*result1;
	char	*result2;

	result1 = strnstr(essai, "is et", 3);
	result2 = ft_strnstr(essai, "is et", 3);
	if (result2)
		return (1);
	return (0);
}

void		test_strnstr()
{
	ft_putendl("TEST STRNSTR :");
	if (!test_strnstr_1() && !test_strnstr_2())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
	ft_putchar('\n');
}
