/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:42:53 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/18 15:04:52 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	g_init3;

void	affiche(int x, int y, int z)
{
	char	tab[5];

	tab[0] = x + '0';
	tab[1] = y + '0';
	tab[2] = z + '0';
	tab[3] = ',';
	tab[4] = ' ';
	if ((x == 7) && (y == 8) && (z == 9))
		tab[3] = '\n';
	if (tab[0] != tab[1] && tab[1] != tab[2] && tab[2] != tab[0])
		write(1, &tab, 5);
}

void	boucle_sur_les_unites(int *x, int *y, int *z, int *pos3)
{
	while (*z <= 9)
	{
		affiche(*x, *y, *z);
		*z += 1;
	}
	*pos3 += 1;
	*z = *pos3;
	*y += 1;
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;
	int	pos3;
	int	pos2;

	x = 0;
	y = 1;
	z = 2;
	pos2 = y;
	pos3 = z;
	g_init3 = z;
	while (x <= 7)
	{
		while (y <= 8)
			boucle_sur_les_unites(&x, &y, &z, &pos3);
		pos3 = g_init3;
		pos3++;
		g_init3++;
		z = pos3;
		pos2++;
		y = pos2;
		x++;
	}
}

/*int	main(void)
{
	ft_print_comb ();
	return (0);
}*/
