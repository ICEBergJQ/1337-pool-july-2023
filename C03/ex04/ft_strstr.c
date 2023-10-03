/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:58:19 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/24 16:57:38 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b] && to_find[b] != '\0')
		{
			b++;
		}
		if (to_find[b] == '\0')
		{
			return (&str[a]);
		}
		a++;
	}
	return (0);
}
