/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:30:41 by memotyle          #+#    #+#             */
/*   Updated: 2024/05/17 16:31:55 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*value;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	value = malloc(sizeof(int) * (max - min));
	if (value == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (max - min))
	{
	value[i] = min + i;
	i++;
	}
	return (value);
}
