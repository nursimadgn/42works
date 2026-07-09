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

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	char	*empty;

	str = "Hello";
	empty = "";
	printf("%d %d\n", ft_strlen(str), ft_strlen(empty));
	return (0);
}
