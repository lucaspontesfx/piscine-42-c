/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:41:17 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/17 16:00:10 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
   
int	main(void)
{
	char	str1[] = "Lucas";
	char	str2[] = "Carol";

	printf("Before copy:  %s %s\n", str1, str2);

	ft_strcpy(str1, str2);

	printf("After copy: %s %s ", str1, str2);
	return (0);
}
*/
