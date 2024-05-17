/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memotyle <memotyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:12:11 by memotyle          #+#    #+#             */
/*   Updated: 2024/05/17 16:14:16 by memotyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		nb = nb * ft_recursive_factorial (nb - 1);
	return (nb);
}
/* au 3eme if : rappel de la fonction qui va donner
la valeur de n-1 dans le fonction (ici 5-1 = 4) etc…*/
