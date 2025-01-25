/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:21:04 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/25 18:53:42 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	numero;
	int	aux;
	int	i;

	numero = 0;
	aux = 1;
	i = 0;
	while (!(str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		if (str[i] == 43 || str[i] == 45)
			aux *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numero = numero * 10 + (str[i] - 48);
		i++;
	}
	return (numero * aux);
}

/*int	main(void)
{
	int num = ft_atoi(" ---+--+1234ab567");
	printf("%i", num);
	return (0);
}*/
