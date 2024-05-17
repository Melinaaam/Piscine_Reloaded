/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:19:39 by memotyle          #+#    #+#             */
/*   Updated: 2024/05/17 17:16:28 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				ft_putchar (argv[i][j]);
				j++;
			}
			i++;
			ft_putchar ('\n');
		}
	}
	return (0);
}
