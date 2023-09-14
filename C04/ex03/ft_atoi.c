/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokay <atokay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:03:43 by atokay            #+#    #+#             */
/*   Updated: 2023/09/14 09:33:18 by atokay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	number;

	i = 0;
	negative = 0;
	number = 0;
	while ((str[i] != '\0') && (str[i] < 48 || str[i] > 57))
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	if (negative % 2 == 1)
		return (number * -1);
	return (number);
}
