/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:56:44 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/27 14:31:21 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	aux;

	aux = nb;
	if (power == 0)
		return (1);
	else if (power - 1 > 0)
		aux = nb * ft_recursive_power(nb, power - 1);
	else if (power < 0)
		return (0);
	return (aux);
}

/*int main(void)
{
	printf("%i", ft_recursive_power(2, 3));
	return (0);
}*/
