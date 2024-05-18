/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melinamotylewski <melinamotylewski@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:12:11 by memotyle          #+#    #+#             */
/*   Updated: 2024/05/18 10:41:49 by melinamotyl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(13));
	return (0);
}
au 3eme if : rappel de la fonction qui va donner
la valeur de n-1 dans le fonction (ici 5-1 = 4) etc…
*/
