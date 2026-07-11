/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 17:58:00 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/11 16:14:44 by seldogan         ###   ########.fr       */
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

int	check_base(char *base_check)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base_check) < 2)
		return (0);
	while (base_check[i])
	{
		j = i + 1;
		while (base_check[j])
		{
			if (base_check[i] == base_check[j])
				return (0);
			j++;
		}
		if ((base_check[i] >= 9 && base_check[i] <= 13) || base_check[i] == 32
			|| base_check[i] == '-' || base_check[i] == '+')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_atoi(char *atoi_check, int *sign)
{
	int	i;

	i = 0;
	while (atoi_check[i] == 32 || (atoi_check[i] >= 9 && atoi_check[i] <= 13))
		++i;
	while ((atoi_check[i] == 45) || (atoi_check[i] == 43))
	{
		*sign *= (44 - atoi_check[i]);
		i++;
	}
	return (i);
}

int	get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	long int	base_len;
	long int	result_atoi;
	int			sign;
	int			base_index;

	if (!check_base(base))
	{
		return (0);
	}
	result_atoi = 0;
	sign = 1;
	base_len = ft_strlen(base);
	i = check_atoi(str, &sign);
	base_index = get_base_index(str[i], base);
	while (base_index != -1)
	{
		result_atoi = (result_atoi * base_len) + base_index;
		i++;
		base_index = get_base_index(str[i], base);
	}
	return (result_atoi * sign);
}
