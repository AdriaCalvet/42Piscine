/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:51:45 by acalvet           #+#    #+#             */
/*   Updated: 2023/11/09 14:15:19 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


void	ft_print_combn(int n)
{
	int	i;
	int passat;
	int	j;

	i = 0;
	passat = n;
	
	/*if (n > 0 && n < 10)
		while (n > 0)
		{
			j = i;
			while (i < 9)
			{
				write (1, i++ + '0', 1);
				write (1, i++ + '0', 1);

			}	
			n--;
		}*/

	while (i < 9)
	{
		passat = n;
		j = i;
		while (passat > 0)
		{
			write (1, j + '0', 1);
			j++;
		}
		i++;
	}

}

int	main()
{
	ft_print_combn(2);
	return (0);
}
