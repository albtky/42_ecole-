/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokay <atokay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:55:05 by atokay            #+#    #+#             */
/*   Updated: 2023/09/10 16:00:38 by atokay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char **str)
{

	int k = 1;
	int i = 0;
	while (*str[i])
	{
		i = 0;
		while (str[k] && *str[k][i])
		{
			write(1, &str[k][i], 1);
			i++;
		}
		k++;
	}
}

int main()
{
	char *s[] = {"alperen ", "tokay"};
	ft_putstr(&s[0]);
}