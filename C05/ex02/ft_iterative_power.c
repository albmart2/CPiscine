/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:45:05 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/27 14:28:43 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	aux = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	power -= 1;
	while (power > 0)
	{
		aux = aux * nb;
		power --;
	}
	if (power < 0)
		return (0);
	return (aux);
}

/*int main(void)
{
	printf("%i", ft_iterative_power(2, 2));
	return (0);
}*/
