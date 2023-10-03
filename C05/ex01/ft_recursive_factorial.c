/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:23:45 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/30 15:33:09 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	rslt;

	rslt = 1;
	if (nb > 0)
	{
		rslt *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (rslt);
}
