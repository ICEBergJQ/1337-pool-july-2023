/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <sakacmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:42:25 by sakacmi           #+#    #+#             */
/*   Updated: 2023/08/01 22:42:45 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	size;
	int	*result;

	size = max - min;
	result = (int *)malloc(sizeof(int) * size);
	a = 0;
	if (min >= max || result == NULL)
		return (NULL);
	while (a < size)
	{
		result[a] = min + a;
		a++;
	}
	return (result);
}
