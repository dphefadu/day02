/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphefadu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 10:25:42 by dphefadu          #+#    #+#             */
/*   Updated: 2020/06/19 13:51:40 by dphefadu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void   ft_print_alphabet(void)
{
	char printletters;
	printletters = 'a';
	while (printletters <= 'z')
	 {
		 ft_putchar(printletters);
		 printletters++;
	 }
}



