/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokay <atokay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:46:37 by atokay            #+#    #+#             */
/*   Updated: 2023/09/14 13:47:27 by atokay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
int i=argc-1; 
int y; 

	while(i > 0)
	{
		y=0;
		while(argv[i][y])
		{
			ft_putchar(argv[i][y]);
			y++;
		}
		i--;
		ft_putchar ('\n');
	}
	return (0);
}
