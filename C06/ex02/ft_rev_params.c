/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:13:24 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/11 20:46:32 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	i = 0;

	int j;
	j = 1;

	j = ac -1;

	if(ac < 2)
	{
		return(0);
	}

	while (av[j][i])
	{
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j--;

		if (j == 0)
		{
			break;
		}
	}
}