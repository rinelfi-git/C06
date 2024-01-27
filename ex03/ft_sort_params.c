/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:29:57 by erijania          #+#    #+#             */
/*   Updated: 2024/01/26 18:29:58 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	src_i;

	src_i = -1;
	while (src[++src_i])
		dest[src_i] = src[src_i];
	dest[src_i] = '\0';
	return (dest);
}

void	ft_reorder(char **args, int size)
{
	int		i;
	char	temp[100];
	int		permute;

	permute = 1;
	while (permute)
	{
		i = 1;
		while (i < size - 1)
		{
			permute = 0;
			if (args[i][0] - args[i + 1][0] > 0)
			{
				ft_strcpy(temp, args[i]);
				ft_strcpy(args[i], args[i + 1]);
				ft_strcpy(args[i + 1], temp);
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

int main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_reorder(argv, argc);
	while (i < argc - 1)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return 0;
}
