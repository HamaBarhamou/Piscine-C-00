/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:44:20 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/13 10:50:52 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


void	affcihe_nombre(int x)
{
	int		rest;
	int		quotient;
	char	tab[2];

	if (x <= 9)
	{
		tab[0] = '0';
		tab[1] = x + '0';
	}
	else
	{
		rest = x % 10;
		quotient = x / 10;
		tab[0] = quotient + '0';
		tab[1] = rest + '0';
	}
	write(1, &tab, 4);
}

void	ft_print_comb2(void)
{
	int digi[4];

	digi[0] = 0;
	digi[1] = 0;
	digi[2] = 0;
	digi[3] = 1;
	
}
/*
int	main(void)
{

}*/
