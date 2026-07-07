/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 19:42:06 by seldogan          #+#    #+#             */
/*   Updated: 2026/07/07 20:36:54 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{

	int i;
	i = 0;

	int flag;
	flag = 0;
	
	int sign;
	int result;

	while( flag && !(str[i] == 45 || str[i] == 43 ||
		(str[i] >= '0' && str [i] <='9')))
	{	
		i++;
		if(str[i] == '\0')
		{
			flag = 0;	
		}
	}

	flag = 0;

	while(!flag)
	{
		if(str[i] == 45)
		{
		 *= -1;
		}

		sign = str[i];
		
		while(str[i] >= '0' && str [i] <='9')
		{
			i++;
		}
		
	}
	


	
}