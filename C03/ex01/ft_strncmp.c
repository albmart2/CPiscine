/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:09:55 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/23 01:40:37 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (i < n)
	{
		if (s1[i] && !s2[i])
			return (1);
		else if (s2[i] && !s1[i])
			return (-1);
	}
	return (0);
}

/*int main(void)
{
	char s1[] = "hola";
	char s2[] = "hola";
	unsigned int n = 2;

	printf("%i", ft_strncmp(s1, s2, n));
	return (0);
}*/
