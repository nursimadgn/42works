/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 17:58:00 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/09 19:00:16 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int	check_base(char *base_check)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base_check[i])
	{
		j = i + 1;
		while (base_check[j])
		{
			if (base_check[i] == base_check[j])
			{
				return (0);
			}
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

long int check_atoi(char *atoi_check, int *sign, int *result, char *base)
{

	int i;
	i = 0;	

	
	
	while (atoi_check[i] == 32 || (atoi_check[i] >= 9 && atoi_check[i] <= 13))
		++i;

	while((atoi_check[i] == 45) || (atoi_check[i] == 43))
	{
		*sign  *=  (44 - atoi_check[i]);		
		i++;	
	}
	return((*sign)*(*result));
}

int	ft_atoi_base(char *str, char *base)
{
	if (!check_base(base))
	{
		return ;
	}
	
	int i;
	long int base_len;
	long int result_atoi;
	int sign;
	result_atoi = 0;
	sign = 1;
	base_len = 0;
	i = 0;	

	check_atoi(str, &sign, &result_atoi, base);

	base_len = ft_strlen(base);
	
	while()
	

	
}

int main()
{

	char array1[] = " ---1010ab";
	
	int sayi = ft_atoi_base(array1, "01");

	printf("%d", sayi);

	return(0);
}
