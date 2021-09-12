/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:38:13 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/12 16:42:48 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_print_comb(void)
{
	char	nb[5];
	char	position1, position2, position3;
	char	init1, init2, init3;
	
	nb[0] = '0';
	nb[1] = '1';
	nb[2] = '2';
	nb[3] =',';
	nb[4] = ' ';
	position1 = nb[0];
	position2 = nb[1];
	position3 = nb[2];
	while (nb[0] < '7')
	{
		while (nb[1] <= '8')
		{
			while (nb[2] <= '9')
			{
				write(1, &nb, 5);
				nb[2] += 1;
			}
			//position3 += 1;
			nb[2]=position1+1;
			//nb[2] = position3;
			nb[1] += 1;
		}
		nb[0] += 1;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
