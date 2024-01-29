/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:13:19 by acalvet           #+#    #+#             */
/*   Updated: 2023/10/25 14:14:43 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	r;
	int	i;

	r = 1;
	i = 0;
	while (str[i] != '\0' && r == 1)
	{
		if (str[i] < 97 || str[i] > 122)
			r = 0;
		i++;
	}
	return (r);
}
