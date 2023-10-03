/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 02:43:26 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/19 02:46:52 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	a;

	a = 0;
	while (src[a] != 0)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = 0;
	return (dest);
}
