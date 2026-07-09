/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:34:52 by seldogan          #+#    #+#             */
/*   Updated: 2026/06/25 19:35:51 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
char	harf;
harf	=	'a';
	while(harf <= 'z') {
	write(1 , &harf , 1 );
	harf++;
	}
}
int		main()
{
	ft_print_alphabet();
	return(0);
}