/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 15:12:25 by event             #+#    #+#             */
/*   Updated: 2020/06/25 07:49:52 by dphefadu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_putchar(char c)
{
	write(1 , &c, 1);
}

void ft_print_comb(void)
{
	char h ,t ,d ;

	h = '0';
	while (h <= '7')
	{
		t = h +1;
		while (t <= '8')
		{
			d = t + 1;
		while (d <= '9')	
		{
			if (h!=d && t!=h && t!=d)
			{
			 	ft_putchar(h);
				ft_putchar(t);
				ft_putchar(d);
				ft_putchar(',');
				ft_putchar(' ');
			}
		d++;	
		}
		t++;
		}
		h++;
	
	}
}




