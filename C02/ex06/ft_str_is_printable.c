/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:55:33 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/21 03:19:06 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	returnvar;

	i = 0;
	returnvar = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			returnvar = 0;
		i++;
	}
	return (returnvar);
}

/*int main(void)
{
	char src[30] = "anretnnrgneo";
	int num;

	num = ft_str_is_printable(src);
	printf("El resultado es %d", num);
}*/
