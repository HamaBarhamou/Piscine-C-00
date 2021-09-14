/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:02:40 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/13 15:03:15 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putnbr(int nb)
{
	int	nombre;
	int	q;
	char tab[15];
	int i;
	printf("nombre_fon nb=%d",nb);
	nombre = nb;
	if (nb < 0)
	{
		nombre = nombre * (-1);
		write(1, "-", 1);
	}
	i =0;
	q = nombre;
	while(q != 0)
	{
		tab[i] = q % 10 + '0';
		i++;
		q = q / 10;
	}
	i--;
	while (i>=0)
	{
		write(1, &tab[i], 1);
		i--;
	}
}

int	main(void)
{
	//int a=-2147483648;
	//printf("%d\n",a);
	ft_putnbr(-2147483647);
	write(1, "\n", 1);
	return (0);
}
