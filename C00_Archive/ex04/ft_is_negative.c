/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seldogan <seldogan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 20:50:34 by seldogan          #+#    #+#             */
/*   Updated: 2026/06/25 20:50:34 by seldogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n >= 0)
    {
        write(1, "P", 1);
    }
    else
    {
        write(1, "N", 1);
    }
}

int main()
{
    ft_is_negative(1);
    write(1, "\n", 1);
    ft_is_negative(0);
    write(1, "\n", 1);
    ft_is_negative(-8);
}