/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:33:08 by acalvet           #+#    #+#             */
/*   Updated: 2023/10/25 18:01:50 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];

	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[(*str >> 4) & 0xF];
			hex[2] = "0123456789abcdef"[*str & 0xF];
			write(1, hex, 3);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
