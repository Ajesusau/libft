/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:55:46 by anareval          #+#    #+#             */
/*   Updated: 2025/01/27 19:46:21 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (dst[i] && i < n)
		i++;
	while (src[j])
		j++;
	k = i + j;
	j = 0;
	if (i < n)
	{
		while (src[j] && (i + j) < (n - 1))
		{
			dst[i + j] = src[j];
			j++;
		}
		if ((i + j) < n)
			dst[j + i] = 0;
	}
	return (k);
}
