/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:04:47 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/30 15:22:15 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	rslt;

	rslt = 1;
	while (nb > 0)
	{
		rslt *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (rslt);
}
