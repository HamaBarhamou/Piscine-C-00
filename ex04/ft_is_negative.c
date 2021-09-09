/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bissaka- <bissaka-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:14:44 by bissaka-          #+#    #+#             */
/*   Updated: 2021/09/09 09:05:41 by bissaka-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	car;

	if (n >= 0)
	{
		car = 'P';
		write(1, &car, 1);
	}
	else
	{
		car = 'N';
		write(1, &car, 1);
	}
}

//int main(void)
//{
//    ft_is_negative(-5);
//}