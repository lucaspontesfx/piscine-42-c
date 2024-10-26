/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:31:01 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/25 22:38:58 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;//percorrer a string passad como parametro
	int	flag;
	int	res;

	i = 0;
	flag = 1;
	res = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			flag = flag * - 1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * flag);
}

int	main()
{
	char	st[] = "  ---+++---+1234253";
	printf("%d", ft_atoi(st));
	return (0);
}
