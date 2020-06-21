/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:42:46 by event             #+#    #+#             */
/*   Updated: 2020/06/21 12:50:24 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_is_negative(int n)
{
	if (n < 0){
		ft_putchar('N');
	}else
	{
		ft_putchar('P');
	}

}

int main(void)
{
	int n;
	ft_is_negative(n);
	return(0);
}
