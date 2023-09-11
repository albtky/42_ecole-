/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokay <atokay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:18:12 by atokay            #+#    #+#             */
/*   Updated: 2023/09/10 18:55:44 by atokay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
int	ft_strlen(int *str)
{
	int		counter;

	counter = 0;
	while (*str != 30)
	{
		counter++;
		str++;
	}
	return (counter);
}

int	main(void)
{	
	int str[] = {1,2,3,7,67,6,45,45,4,3,43,43,3,3,3,3,3,3,3,3,3,3,3,3,30};
	ft_rev_int_tab(str, ft_strlen(str));
int i = 0 ;
	while(i <=ft_strlen(str))
	printf("%d", str[i++]);	
	return (0);
}

char a[] = {"a", "b", "c"}