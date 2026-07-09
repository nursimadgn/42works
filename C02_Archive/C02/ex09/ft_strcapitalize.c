/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 13:39:44 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/04 14:39:13 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_alphanum(char str)
{
	int	flagfon;

	if (!(str >= 'a' && str <= 'z' || str >= 'A' && str <= 'Z' || str >= '0'
			&& str <= '9'))
	{
		flagfon = 1;
	}
	else
	{
		flagfon = 0;
	}
	return (flagfon);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if (!flag && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (flag && str[i] >= '0' && str[i] <= '9')
		{
			flag = 0;
		}
		if (flag && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			flag = 0;
		}
		flag = ft_is_alphanum(str[i]);
		i++;
	}
	return (str);
}
/* int	main(void)
{
	char array[] = "hi, how are you? 42words forty-two; fifty+and+one";

	ft_strcapitalize(array);

	int i = 0;
	while (array[i])
	{
		write(1, &array[i], 1);
		i++;
	}

	return (0);
}
	*/