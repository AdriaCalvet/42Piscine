/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:31:15 by acalvet           #+#    #+#             */
/*   Updated: 2023/10/25 16:11:30 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	lower_to_upper(char str)
{
	if (str >= 97 && str <= 122)
		str = str - 32;
	return (str);
}

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_alfanumeric(char c)
{
	return (is_lowercase(c) || is_uppercase(c) || (c >= 48 && c <= 57));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	start = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48 && str[i] <= 57) && start == 1)
			start = 0;
		else if (is_lowercase(str[i]) && start == 1)
		{
			str[i] = str[i] - 32;
			start = 0;
		}
		else if (is_uppercase(str[i]))
			str[i] = str[i] + 32;
		else if (!is_alfanumeric(str[i]))
			start = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	frase[6];

	frase[0] = 'a';
	frase[1] = 'b';
	frase[2] = 'C';
	frase[3] = ' ';
	frase[4] = 'd';
	frase[5] = 'E';
	ft_strcapitalize(frase);
	return (0);
}*/
