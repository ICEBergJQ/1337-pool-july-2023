/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:44:08 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/17 17:35:06 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	sw;

	while (size >= 0)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				sw = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = sw;
			}
			a++;
		}
		size--;
	}
}
