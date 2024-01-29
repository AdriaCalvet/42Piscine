/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:29:52 by acalvet           #+#    #+#             */
/*   Updated: 2023/10/24 18:27:57 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_final(void)
{
	char	coma;
	char	space;

	coma = ',';
	space = ' ';
	write (1, &coma, 1);
	write (1, &space, 1);
}

void	print(int primer, int segon)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;
	char	space;

	space = ' ';
	n1 = (primer / 10) + '0';
	n2 = (primer % 10) + '0';
	n3 = (segon / 10) + '0';
	n4 = (segon % 10) + '0';
	write (1, &n1, 1);
	write (1, &n2, 1);
	write (1, &space, 1);
	write (1, &n3, 1);
	write (1, &n4, 1);
	if (n1 != '9' || n2 != '8' || n3 != '9' || n4 != '9')
	{
		print_final();
	}
}

void	ft_print_comb2(void)
{
	int	primer;
	int	segon;

	primer = 0;
	segon = 1;
	while (primer < 99)
	{
		while (segon < 100)
		{
			print(primer, segon);
			segon++;
		}
		primer++;
		segon = primer + 1;
	}
}
