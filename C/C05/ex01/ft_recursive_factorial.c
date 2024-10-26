/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:01:02 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/23 10:53:15 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result = result * nb * ft_recursive_factorial(nb - 1);
		nb = nb - 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_factorial(0));
	return (0);
}
*/
