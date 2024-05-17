/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:23:48 by memotyle          #+#    #+#             */
/*   Updated: 2024/05/17 17:16:38 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str++);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_params(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp (argv[j], argv[j + 1]) > 0)
			{
			temp = argv[j];
			argv[j] = argv[j + 1];
			argv[j + 1] = temp;
			}
		j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (1);
	ft_params (argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr (argv[i]);
		ft_putstr ("\n");
		i++;
	}
	return (0);
}
