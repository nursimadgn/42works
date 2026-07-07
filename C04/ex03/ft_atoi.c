/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nursimadogan <nursimadogan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 19:42:06 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/08 01:00:51 by nursimadoga      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{

	int i;
	i = 0;
	
	int flag = 1;
	int sign = 1;
	int result = 0;

	while(flag && !(str[i] == 45 || str[i] == 43 ||
		(str[i] >= '0' && str [i] <='9')))
	{	
		if(str[i] == '\0')
		{
			flag = 0;;	
		}
		i++;
	}

    if (str[i] == 45 || str[i] == 43)
    {
        if (str[i] == 45)
        {
            sign *= -1;
        }
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    
    return (result * sign);
}

int main()
{

	char array[] = "--45abc";

	int deneme = ft_atoi(array);
	
	printf("%d", deneme);

	return(0);
}