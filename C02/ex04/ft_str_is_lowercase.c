/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 06:02:40 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/19 21:30:25 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 97 && str[a] <= 122)
			a++;
		else
			return (0);
	}
	return (1);
}
