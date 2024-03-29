/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:04:15 by acalvet           #+#    #+#             */
/*   Updated: 2023/10/25 14:11:22 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	r;
	int	i;

	r = 1;
	i = 0;
	while (str[i] != '\0' && r == 1)
	{
		if (str[i] < 48 || str[i] > 57)
			r = 0;
		i++;
	}
	return (r);
}
