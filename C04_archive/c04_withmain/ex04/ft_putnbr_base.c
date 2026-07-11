/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 14:54:40 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/11 15:26:03 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str2[i])
	{
		j = i + 1;
		while (str2[j])
		{
			if (str2[i] == str2[j])
			{
				return (0);
			}
			j++;
		}
		if ((str2[i] >= 9 && str2[i] <= 13) || str2[i] == 32 || str2[i] == '-'
			|| str2[i] == '+')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	base_len;
	long int	long_nbr;

	if (!check_base(base))
	{
		return ;
	}
	base_len = ft_strlen(base);
	long_nbr = nbr;
	if (base_len <= 1)
		return ;
	if (long_nbr < 0)
	{
		ft_putchar('-');
		long_nbr *= -1;
	}
	if (long_nbr < base_len)
	{
		ft_putchar(base[long_nbr]);
	}
	else
	{
		ft_putnbr_base(long_nbr / base_len, base);
		ft_putnbr_base(long_nbr % base_len, base);
	}
}
