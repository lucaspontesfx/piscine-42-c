/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:30:31 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/12 14:12:44 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = aux / *b;
	*b = aux % *b;
}
/*
int	main(void)
{
	int	x = 15;
	int	y = 7;

	ft_ultimate_div_mod(&x, &y);

	printf("Division  = %d\n", x);
	printf("Mod  = %d\n", y);
	return (0);
}
*/
