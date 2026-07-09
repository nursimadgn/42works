/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 16:58:00 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/04 18:06:36 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hextocharletter(int a)
{
	int		nbr;
	
	nbr = a - 9;
	ft_putchar("abcdef"[nbr - 1]);
}

void	dectohex(char dec)
{
	int	tens;
	int	ones;

	tens = dec / 16;
	ones = dec % 16;
	ft_putchar(tens + '0');
	if (ones > 9)
	{
		hextocharletter(ones);
	}
	else
	{
		ft_putchar(ones + '0');
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			dectohex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(void)
{
	char array1[] = "Hello How are you?";
	ft_putstr_non_printable(array1);

	return (0);
}
