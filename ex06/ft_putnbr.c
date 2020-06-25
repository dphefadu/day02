/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphefadu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 15:13:22 by dphefadu          #+#    #+#             */
/*   Updated: 2020/06/25 07:51:39 by dphefadu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, sizeof(char));
}
void ft_putnbr(int nb)
{

	if  (nb >0)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
		if(nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb* -1);
	}
}


