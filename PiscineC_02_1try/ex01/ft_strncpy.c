/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvet <acalvet@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:38:55 by acalvet           #+#    #+#             */
/*   Updated: 2023/10/25 12:49:38 by acalvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while ((unsigned int)i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while ((unsigned int)i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
