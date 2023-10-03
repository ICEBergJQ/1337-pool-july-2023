/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:39:11 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/30 16:44:00 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	rslt;

	rslt = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (rslt);
}
