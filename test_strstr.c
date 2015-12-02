/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:33:58 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/02 13:01:44 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test_strstr_1()
{
	char	essai[50] = "Je suis etudiant a 42";
	char	*result1;
	char	*result2;

	result1 = strstr(essai, "is et");
	result2 = strstr(essai, "is et");
	if (!result2)
		return (1);
	return (strcmp(result1, result2));
}

static int	test_strstr_2()
{
	char	essai[50] = "Je suis etudiant a 42";
	char	*result1;
	char	*result2;

	result1 = strstr(essai, "");
	result2 = strstr(essai, "");
	if (!result2)
		return (1);
	return (strcmp(result1, result2));
}

static int	test_strstr_3()
{
	char	essai[50] = "Je suis etudiant a 42";
	char	*result1;
	char	*result2;

	result1 = strstr(essai, "tt");
	result2 = strstr(essai, "tt");
	if (result2)
		return (1);
	return (0);
}

void		test_strstr()
{
	ft_putstr("TEST STRSTR : ");
	if (!test_strstr_1() && !test_strstr_2() && !test_strstr_3())
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
