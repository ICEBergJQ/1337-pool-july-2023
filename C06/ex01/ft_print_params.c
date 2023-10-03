/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:56:18 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/29 15:22:57 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	b = 1;
	while (b < argc)
	{
		a = 0;
		while (argv[b][a] != 0)
		{
			ft(argv[b][a]);
			a++;
		}
		b++;
		write(1, "\n", 1);
	}
}
