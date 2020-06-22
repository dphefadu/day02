/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphefadu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 09:04:08 by dphefadu          #+#    #+#             */
/*   Updated: 2020/06/22 14:41:49 by dphefadu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>


void ft_putchar(char a)
{
	write(1, &a, sizeof(char));
}
void ft_printcombo2(void)
{  
	char a, b;
	a = 0;
	while (a < 99)
	{
		b = a + 1 ;
		while ( b < 99)
	
	{
		ft_putchar(a/10 + '0');
		ft_putchar(a%10 +'0');
		ft_putchar( ' ');
		ft_putchar(b/10 +'0');
		ft_putchar(b%10 +'0');
		ft_putchar(';');	
		b++;
	}
		a++;
	}
}	

int main (void)
{
	ft_printcombo2();
	return 0;
}







