/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:37:18 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/11 19:59:27 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod( int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	a = 20;
	int	b = 3;

	ft_div_mod(a, b, &x,&y);
	printf("a div  b = %d\n", x);
	printf("a mod b = %d", y);
	return (0);
}
*/
