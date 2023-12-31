/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atokay <atokay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:15:57 by atokay            #+#    #+#             */
/*   Updated: 2023/09/18 17:11:31 by atokay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


#include <stdio.h>
int main()
{
	char d[]="alperen";
	char s[]="ahmet";
	char src[] = "beautiful";
	char dest[] = "Woasdasdadas";
	printf("%s",ft_strcpy(dest,src));
	return(0);
}
