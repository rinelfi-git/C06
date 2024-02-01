/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2024/01/26 18:29:34 by erijania          #+#    #+#             */
/*   Updated: 2024/02/01 21:39:47 by erijania         ###   ########.fr       */
=======
/*   Created: 2024/02/01 18:37:00 by erijania          #+#    #+#             */
/*   Updated: 2024/02/01 18:37:41 by erijania         ###   ########.fr       */
>>>>>>> abe9290 (norminette)
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i--;
	}
	return (0);
}
