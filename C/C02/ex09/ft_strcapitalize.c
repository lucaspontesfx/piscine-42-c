/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:07:14 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/16 20:51:39 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] >= 'Z')
		{
			str[i] += 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (n == 1)
			{
				str[i] -= 32;
				n = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			n = 0;
		else
			n = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	 main(void)
{
	char	buffer[] = "ola,tudo bem? cinquenta+e+um";
		printf("%s", ft_strcapitalize(buffer));
	return (0);
}
*/
