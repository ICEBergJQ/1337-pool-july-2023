/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakacmi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:33:05 by sakacmi           #+#    #+#             */
/*   Updated: 2023/07/29 22:20:43 by sakacmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && (s1[a] != '\0' || s2[a] != '\0'))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

void	swap(int argc, char **argv)
{
	char	*swp;
	int		a;

	a = 1;
	while (a < argc - 1)
	{
		if (ft_strcmp(argv[a], argv[a + 1]) > 0)
		{
			swp = argv[a];
			argv[a] = argv[a +1];
			argv[a + 1] = swp;
			a = 0;
		}
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	a;

	a = 1;
	swap(argc, argv);
	while (a < argc)
	{
		putstr(argv[a]);
		a++;
		write(1, "\n", 1);
	}
}
