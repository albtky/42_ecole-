/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokay <atokay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:58:48 by eulutas           #+#    #+#             */
/*   Updated: 2023/09/19 15:15:49 by atokay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	size_arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size_arr = max - min;
	arr = (int *)malloc(size_arr * sizeof(int));
	if (!arr)
		return (-1);
	i = 0;
	while (i < size_arr)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size_arr);
}



