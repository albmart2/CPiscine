/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:51:36 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/26 12:19:27 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	b;
	int	fact;

	b = nb;
	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (b > 1)
	{
		fact = fact * b;
		b--;
	}
	return (fact);
}

/*int main(void)
{
	printf("%i", ft_iterative_factorial(-8));
	return (0);
}*/
