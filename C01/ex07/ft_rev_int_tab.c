/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:51:17 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/15 13:00:33 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;
	int	half_size;

	half_size = size / 2;
	i = 0;
	while (halfSize > 0)
	{
		aux = tab[i];
		tab [i++] = tab [size - 1];
		tab [size - 1] = aux;
		halfSize --;
	}
	return (i);
}
