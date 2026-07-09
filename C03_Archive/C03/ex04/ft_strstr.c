/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 17:10:56 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/07 17:10:57 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* mynot: to_find boş iise str döndür, to_find içinde geçmiyorsa null dönmeli*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		j = 0;
		while (str[i] && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char array1[] = "hello dworlodw";
	char tofind[] = "lod";

	char *ptr = ft_strstr(array1, tofind);

	printf("%s", ptr);

	return (0);
}