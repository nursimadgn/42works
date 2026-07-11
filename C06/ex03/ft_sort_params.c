/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:13:24 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/11 21:07:27 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char s1, char s2)
{
	if (s1 == s2)
	{
		return (0);
	}
	else
	{
		return (s1 - s2);
	}
}

int	main(int ac, char **av)
{
	int i;
	i = 0;

	int j;
	j = 1;

	j = ac - 1;

	if (ac < 2)
	{
		return (0);
	}
	while (av[j][i])
	{
		while (av[j][i])
		{
			if(ft_strcmp(av[j][i], av[j + 1][i]) < 0)
			{
				
					
			}
			i++;
		}

		i = 0;
		j++;

		if (!(j < ac))
		{
			break ;
		}
	}
}