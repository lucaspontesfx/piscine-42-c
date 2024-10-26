/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:57:49 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/16 14:34:56 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	test[] = "oilaura";
	ft_strupcase(test);
	printf("%s", ft_strupcase(test));
	return (0);
}
*/
