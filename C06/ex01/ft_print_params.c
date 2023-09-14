/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokay <atokay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:46:35 by atokay            #+#    #+#             */
/*   Updated: 2023/09/14 13:47:09 by atokay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main(int argc, char **argv)
{
	int i= 1;
	int a;
	while(i < argc)
	{
		a = 0; 
		while(argv[i][a]!='\0')
		{
			ft_putchar(argv[i][a]);
			a++;
		}
	ft_putchar('\n');
	i++;
	}
return (0);
}
