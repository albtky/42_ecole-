/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokay <atokay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:48:07 by atokay            #+#    #+#             */
/*   Updated: 2023/09/10 18:39:56 by atokay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int **a, int **b)
{
	int c;

	if (b != 0)
	{
		c = **a;
		**a = **b;
		**b = c;
	}
}

int main()
{
	int *x;
	int *y;
	int X = 3;
	int Y = 4;
	x = &X;
	y = &Y;
	ft_swap(&x, &y);
	printf("%d---%d", *x, *y);
	return (0);
}
