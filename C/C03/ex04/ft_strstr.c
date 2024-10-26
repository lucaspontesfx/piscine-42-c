/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:48:33 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/19 13:52:02 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr( char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "How is she doing";
	char	find[] = "she";
	printf("%s", ft_strstr(str,find));
	return (0);
}
*/
