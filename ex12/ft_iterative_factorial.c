/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:09:39 by memotyle          #+#    #+#             */
/*   Updated: 2024/05/17 16:42:08 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (n > 0)
	{
		nb = nb * n;
		n--;
	}
	return (nb);
}
