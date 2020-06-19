/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphefadu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:04:02 by dphefadu          #+#    #+#             */
/*   Updated: 2020/06/19 14:21:01 by dphefadu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void    ft_putchar(char c)
{
	write(1 , &c ,1);
}
void    ft_print_alphabet(void)
{
    char    printletter;

    printletter = 'z';
    while (letter >= 'a')
    {
        ft_putchar(printletter);
        letter--;
    }
}

