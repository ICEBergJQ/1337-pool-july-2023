/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 02:28:01 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/22 15:49:51 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] += 32;
			a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	ft_lowercase(str);
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			if (b == 1)
				str[a] -= 32;
				b = 0;
		}
		else if (str[a] >= '0' && str[a] <= '9')
			b = 0;
		else
			b = 1;
		a++;
	}
	return (str);
}
