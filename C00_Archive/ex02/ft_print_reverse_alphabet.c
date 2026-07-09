/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:47:45 by seldogan          #+#    #+#             */
/*   Updated: 2026/06/25 19:47:45 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void) {

char harf;

harf = 'z';

while (harf >= 'a') {

  write(1, &harf, 1 );
  harf -- ;
 
}

}

int	main()
{
	ft_print_reverse_alphabet();
	return (0);
}
