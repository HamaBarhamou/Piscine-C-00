/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:40:51 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/18 14:54:24 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	car;

	car = 'a';
	while (car <= 'z')
	{
		write(1, &car, 1);
		car += 1;
	}
}

/*int main(void)
{
    ft_print_alphabet();
}*/