/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrouet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 08:11:14 by cdrouet           #+#    #+#             */
/*   Updated: 2015/12/03 08:14:27 by cdrouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

void		test_strclr()
{
	char	ptr[20] = "bonjour";

	ft_strclr(ptr);
	ft_putstr("TEST STRCLR : ");
	if (ptr[6] == '\0' && ptr[3] == '\0')
		ft_putendl("ok :)");
	else
		ft_putendl("not ok :(");
}
