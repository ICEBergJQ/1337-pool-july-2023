/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:56:11 by sakacmi           #+#    #+#             */
/*   Updated: 2023/08/01 22:56:34 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	size;

	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	a = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (*range == NULL)
		return (-1);
	while (a < size)
	{
		(*range)[a] = min + a;
		a++;
	}
	return (size);
}
