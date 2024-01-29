/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:36:46 by acalvet           #+#    #+#             */
/*   Updated: 2023/11/09 13:53:48 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

int	base(int nb)
{
	int	base;

	base = 1;
	while (nb > 0)
	{
		nb = nb / 10;
		base = base * 10;
	}
	return (base / 10);
}

void	ft_putnbr(int nb)
{
	int	base_total;

	base_total = base(nb);
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb == 2147483647)
		write (1, "2147483647", 10);
	else if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		print((nb / base_total) + '0');
		ft_putnbr(nb % base_total);
	}
	else if (nb <= 9)
		print(nb + '0');
}

/*int	main()
{
	ft_putnbr(-2147483648);
	return (0);
}*/
