/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:34:29 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/13 17:56:12 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a < 56)
	{
		b = a + 1;
		while (b < 57)
		{
			c = b + 1;
			while (c < 58)
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a < 55)
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*int main(void)
{
	ft_print_comb();
	return (0);
}*/
