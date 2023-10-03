/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:48:21 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/19 03:08:59 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != 0 && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = 0;
		a++;
	}
	return (dest);
}
