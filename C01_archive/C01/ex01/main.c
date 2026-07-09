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

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	number;
	void	*ptrs[8];

	number = 0;
	ptrs[0] = &number;
	ptrs[1] = &ptrs[0];
	ptrs[2] = &ptrs[1];
	ptrs[3] = &ptrs[2];
	ptrs[4] = &ptrs[3];
	ptrs[5] = &ptrs[4];
	ptrs[6] = &ptrs[5];
	ptrs[7] = &ptrs[6];
	ft_ultimate_ft((int *********)ptrs[7]);
	printf("%d\n", number);
	return (0);
}
