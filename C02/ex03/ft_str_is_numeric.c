/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albmart2 <albmart2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:21:48 by albmart2          #+#    #+#             */
/*   Updated: 2023/11/17 12:28:45 by albmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	cont_abe;
	int	cont_num;

	i = 0;
	cont_abe = 0;
	cont_num = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			cont_num++;
		else
			cont_abe++;
		i++;
	}
	if (cont_num == i || (cont_abe == 0 && cont_num == 0))
		return (1);
	else
		return (0);
}

/*int main(void)
{
	char	src[30] = "holaffhuiebfe333";
	int 	num;

	num = ft_str_is_numeric(src);
	printf("El resultado es %d", num);
	return (0);
}*/
