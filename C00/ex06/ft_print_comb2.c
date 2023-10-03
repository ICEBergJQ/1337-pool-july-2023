/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <sakacmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:51:07 by sakacmi           #+#    #+#             */
/*   Updated: 2023/08/02 22:34:41 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft(char c)
{
	write(1, &c, 1);
}

void	ft_printcomb(int a, int b)
{
	ft(a / 10 + 48);
	ft(a % 10 + 48);
	ft(' ');
	ft(b / 10 + 48);
	ft(b % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printcomb(a, b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
