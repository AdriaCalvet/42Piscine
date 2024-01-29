/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:42:27 by acalvet           #+#    #+#             */
/*   Updated: 2023/11/08 15:38:48 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	diferencia;

	i = 0;
	if (min < max)
	{
		diferencia = max - min;
		range = (int *) malloc((diferencia) * sizeof(int));
		if (diferencia > 0)
		{
			while (min < max)
			{
				range[i] = min;
				min++;
				i++;
			}
		}
	}
	else
		return (NULL);
	return (range);
}
