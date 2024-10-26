/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:46:10 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/23 20:01:24 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	result = (ft_fibonacci (index - 2) + ft_fibonacci (index - 1));
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_fibonacci(7));
	return (0);
}
*/
