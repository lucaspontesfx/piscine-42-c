/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:15:44 by lucda-si          #+#    #+#             */
/*   Updated: 2024/09/16 20:14:38 by lucda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[] = "Buble sort techinique";
	char src[] = "Hard!";
	int	n = 3;
	printf("Before function: %s %s\n", dest, src);
	ft_strncpy(dest, src, n);
	printf("After function: %s\n", dest);
	return (0);
}
*/
