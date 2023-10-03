/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <sakacmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:10:50 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/31 23:39:13 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	int		a;
	char	*dest;

	a = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!(dest))
		return (0);
	while (src[a] != 0)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = 0;
	return (dest);
}
