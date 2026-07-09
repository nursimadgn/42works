/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 17:11:07 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/07 17:11:08 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	dest_len = 0;
	while (dest[dest_len])
	{
		dest_len++;
	}
	src_len = 0;
	while (src[src_len])
	{
		src_len++;
	}
	if (size <= dest_len)
	{
		return (dest_len + src_len);
	}
	i = dest_len;
	while (src[j] != '\0' && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

int	main(void)
{
	char array1[5] = "hello";
	char array2[] = "wor";

	unsigned int deneme = ft_strlcat(array1, array2, 5);

	printf("%d", deneme);

	return (0);
}