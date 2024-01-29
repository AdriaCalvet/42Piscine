/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:13:20 by acalvet           #+#    #+#             */
/*   Updated: 2023/10/24 20:26:39 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ri;
	int	swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}
