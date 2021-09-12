/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:42:53 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/12 18:25:59 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	conversion(int x)
{
	if (x == 0)
		return ('0');
	else if (x == 1)
		return ('1');
	else if (x == 2)
		return ('2');
	else if (x == 3)
		return ('3');
	else if (x == 4)
		return ('4');
	else if (x == 5)
		return ('5');
	else if (x == 6)
		return ('6');
	else if (x == 7)
		return ('7');
	else if (x == 8)
		return ('8');
	else
		return ('9');
}

void	affiche(int x, int y, int z)
{
	char	tab[5];

	tab[0] = conversion(x);
	tab[1] = conversion(y);
	tab[2] = conversion(z);
	tab[3] = ',';
	tab[4] = ' ';
	if ((x == 7) && (y == 8) && (z == 9))
		tab[3] = '\0';
	if	(tab[0] != tab[1] && tab[1] != tab[2] && tab[2] != tab[0])
		write(1, &tab, 5);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;
	int	pos3;
	int	pos2;
	int	init3;

	x = 0;
	y = 1;
	z = 2;
	pos2 = y;
	pos3 = z;
	init3 = z;
	while (x <= 7)
	{
		while (y <= 8)
		{
			while (z <= 9)
            {
            	affiche(x, y, z);
                z += 1;
            }
			pos3++;
			z = pos3;
			y++;
		}
		pos3 = init3;
		pos3++;
		init3++;
        z = pos3;
        pos2++;
        y = pos2;
		x++; 
	}
}

int	main(void)
{
	ft_print_comb ();
	return (0);
}
