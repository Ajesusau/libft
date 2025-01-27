/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:42:20 by anareval          #+#    #+#             */
/*   Updated: 2025/01/27 19:44:48 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_tmp;
	size_t			i;

	str_tmp = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (str_tmp[i] == (unsigned char)c)
		{
			return ((void *) &str_tmp[i]);
		}
		i++;
	}
	return (NULL);
}
