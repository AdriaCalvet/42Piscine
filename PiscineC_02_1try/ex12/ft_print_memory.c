/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:17:44 by acalvet           #+#    #+#             */
/*   Updated: 2023/10/26 17:28:08 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	hex;
	char	c;

	c = 'B';
	hex = "0123456789abcdef"[0xf];
	printf("%d", hex);

}
