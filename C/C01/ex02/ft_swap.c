/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:28:50 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/11 16:55:57 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	alt;

	alt = *a;
	*a = *b;
	*b = alt;
}
/*
int	main(void)
{
	int x = 10;
	int y = 20;
	
	printf("Before the swap: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("After the swap: x = %d, y = %d\n", x, y);
	return (0);
}
*/
