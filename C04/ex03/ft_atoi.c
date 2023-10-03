/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:16:40 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/26 12:22:38 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	rslt;
	int	flag;
	int	a;

	rslt = 0;
	flag = 1;
	a = 0;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
	{
		a++;
	}
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			flag = -flag;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		rslt *= 10;
		rslt += str[a] - 48;
		a++;
	}
	return (rslt *= flag);
}
