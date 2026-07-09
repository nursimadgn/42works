/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 20:50:30 by seldogan          #+#    #+#             */
/*   Updated: 2026/06/25 20:50:30 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void) {

char number;

number = '0';

while (number <= '9') {

    write(1, &number , 1 );
    number++ ;
}
}

int main()
{
	ft_print_numbers();
	return (0);
}
