/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:52:53 by acalvet           #+#    #+#             */
/*   Updated: 2023/11/06 17:13:21 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	res;

	i = nb - 1;
	res = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (res);
}
