/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <sakacmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:57:08 by sakacmi           #+#    #+#             */
/*   Updated: 2023/08/01 22:53:03 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

void	clearspace(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
	{
		str[a] = 0;
		a++;
	}
}

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	char	*tab;
	int		len;

	a = 0;
	len = 0;
	while (a < size)
	{
		len = len + ft_strlen(strs[a]);
		if (a < size - 1)
			len = len + ft_strlen(sep);
		a++;
	}
	tab = (char *)malloc(sizeof(char) * len + 1);
	clearspace(tab);
	a = 0;
	while (a < size)
	{
		tab = ft_strcat(tab, strs[a]);
		if (a < size - 1)
			tab = ft_strcat(tab, sep);
		a++;
	}
	return (tab);
}
