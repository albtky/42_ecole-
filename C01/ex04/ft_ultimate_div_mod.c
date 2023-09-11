/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokay <atokay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:52:24 by atokay            #+#    #+#             */
/*   Updated: 2023/09/10 18:40:04 by atokay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div_tmp;
	int		mod_tmp;

	if (*b != 0)
	{
		div_tmp = *a / *b;
		mod_tmp = *a % *b;
		*a = div_tmp;
		*b = mod_tmp;
	}
}
