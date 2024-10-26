/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:14:45 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/24 22:40:51 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (res * res < nb)
	{
		res++;
	}
	if (res * res == nb)
	{
		return (res);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i", ft_sqrt(9));
	return (0);
}
*/
