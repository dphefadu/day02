/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphefadu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:36:14 by dphefadu          #+#    #+#             */
/*   Updated: 2020/06/19 17:28:58 by dphefadu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void    ft_putchar(char	c)
	{ 
	   write(1, &c, 1 );
	}	   
void    ft_print_numbers(void)
{
    char    digit;

    digit ='0';
    while ( digit <='9')
    {
        ft_putchar(digit);
        digit++;
    }
}


