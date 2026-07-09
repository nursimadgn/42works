/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 20:00:00 by seldogan          #+#    #+#             */
/*   Updated: 2026/06/30 20:00:00 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5];

	tab[0] = 5;
	tab[1] = 2;
	tab[2] = 9;
	tab[3] = 1;
	tab[4] = 7;
	ft_sort_int_tab(tab, 5);
	printf("%d %d %d %d %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
