/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 20:39:52 by seldogan          #+#    #+#             */
/*   Updated: 2026/06/30 20:46:27 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	value;

	value = *a;
	*a = *b;
	*b = value;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	if (size <= 1)
		return ;
	j = 0;
	while (j < size - 1)
	{
		i = j + 1;
		while (i < size)
		{
			if (tab[j] > tab[i])
			{
				ft_swap(&tab[j], &tab[i]);
			}
			i++;
		}
		j++;
	}
}
