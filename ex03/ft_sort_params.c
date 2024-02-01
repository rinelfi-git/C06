/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:29:57 by erijania          #+#    #+#             */
/*   Updated: 2024/02/01 21:38:08 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 - *s2 == 0)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_reorder(char **args, int size)
{
	int		i;
	char	*temp;
	int		permute;

	permute = 1;
	while (permute)
	{
		permute = 0;
		i = 1;
		while (i < size - 1)
		{
			if (ft_strcmp(args[i], args[i + 1]) > 0)
			{
				temp = args[i];
				args[i] = args[i + 1];
				args[i + 1] = temp;
				permute = 1;
			}
			i++;
		}
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, str + i, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_reorder(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
