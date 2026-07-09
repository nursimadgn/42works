/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 11:31:04 by seldogan          #+#    #+#             */
/*   Updated: 2026/06/29 11:44:30 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	if (a == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
	}
	ft_putchar(a % 10 + '0');
}
