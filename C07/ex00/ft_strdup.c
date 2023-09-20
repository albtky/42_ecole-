/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokay <atokay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:37:23 by eulutas           #+#    #+#             */
/*   Updated: 2023/09/19 15:12:33 by atokay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(i * sizeof(char));
	i = 0;
	if (dest == NULL)
		return (0);
	else
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}
#include <stdio.h>

int main()
{
	char s[] = "alperen";
	ft_strdup(s);
}
