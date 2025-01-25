/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:48:38 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/20 23:41:40 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char *dest2;
	char dest [30];
	char src [30] = "Hola, buenos dias";

	printf("El archivo de destino es %s y la de origen es %s.", dest, src);
	printf("\n");
	dest2 = ft_strcpy(dest, src);
	printf("El archivo de destino es %s y la de origen es %s.", dest, src);
}*/
