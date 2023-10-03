/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <sakacmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:25:55 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/30 23:07:52 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	i = 2;
	if (nb >= 2)
	{
		while (i <= nb / 4)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
