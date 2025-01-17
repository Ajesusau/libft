/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajesusau <ajesusau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:42:20 by ajesusau          #+#    #+#             */
/*   Updated: 2024/12/20 19:23:15 by ajesusau         ###   ########.fr       */
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
