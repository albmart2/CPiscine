/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:33:20 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/20 23:42:45 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	cont_abe;
	int	cont_num;

	i = 0;
	cont_abe = 0;
	cont_num = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			cont_abe++;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			cont_abe++;
		else
			cont_num++;
		i++;
	}
	if (cont_abe == i || (cont_abe == 0 && cont_num == 0))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	char	src[30] = "holaffhuiebfe333";
	int 	num;

	num = ft_str_is_alpha(src);
	printf("El resultado es %d", num);
	return (0);
}*/
