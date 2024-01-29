/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:31:03 by acalvet           #+#    #+#             */
/*   Updated: 2023/11/08 15:38:59 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = NULL;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	arr = (int *) malloc((max - min) * sizeof(int));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	range[0] = arr;
	return (i);
}
