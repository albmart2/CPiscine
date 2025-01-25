/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:05:46 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/20 23:42:05 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char *dest2;
	char dest [30];
	char src [30] = "Hola, buenos dias";

	printf("El archivo de destino es %s y la de origen es %s.", dest, src);
	printf("\n");
	dest2 = ft_strncpy(dest, src, 6);
	printf("El archivo de destino es %s y la de origen es %s.", dest2, src);
	return (0);
}*/
